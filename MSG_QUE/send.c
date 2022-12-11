#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<sys/ipc.h>
#include<sys/msg.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
struct my_msg
{
	long int msg_type;
	char some_text[512];
}message;

int main()
{
	int running =1;
	int msg_id;
	char msg_size[50];

	key_t key;
	key = ftok("progfile",65);

        msg_id=msgget(key, IPC_CREAT | S_IRUSR | S_IWUSR);

	if(msg_id == -1)
	{
		printf("Error in creating queue\n");
		exit(0);
	}

	while(running)
	{
		printf("Enter some Text :\n");
		fgets(msg_size,50,stdin);

		message.msg_type = 1;
		strcpy(message.some_text,msg_size);

		if(msgsnd(msg_id,&message,sizeof(message),0) == -1)
		{
			printf("Msg Not Sent\n");
		}
		if(strncmp(msg_size,"end",3) == 0)
		{
			running =0;
		}
	}
}

