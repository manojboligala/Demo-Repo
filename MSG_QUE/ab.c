#include<stdlib.h>  
#include<stdio.h>  
#include<string.h>  
#include<unistd.h>  
#include<sys/types.h>  
#include<sys/ipc.h>  
#include<sys/msg.h> 
#include <sys/stat.h>


#define MAX_TEXT 512 

struct my_msg
{
	long int msg_type;
        char some_text[MAX_TEXT];
}message;

int main()  
{
	 int running=1;  
         int msgid;  
         key_t key;
         key = ftok("progfile",65);

	 char buffer[50]; //array to store user input  
         msgid=msgget(key, IPC_CREAT | S_IRUSR | S_IWUSR);  
         if (msgid == -1) // -1 means the message queue is not created  
         {  
                 printf("Error in creating queue\n");  
                 exit(0);  
         }  
  
         while(running)  
         {  
                 printf("Enter some text:\n");  
                 fgets(buffer,50,stdin);  
                 message.msg_type=1;  
                 strcpy(message.some_text,buffer);  
                 if(msgsnd(msgid,&message, sizeof(message),0)==-1) // msgsnd returns -1 if the message is not sent  
                 {  
                         printf("Msg not sent\n");  
                 }  
                 if(strncmp(buffer,"end",3)==0)  
                 {  
                         running=0;  
                 }  
         }  
 }  
