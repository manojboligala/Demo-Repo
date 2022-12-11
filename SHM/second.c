#include<stdio.h>
#include<sys/ipc.h>
#include<sys/shm.h>
#include<unistd.h>
#include<string.h>
#include<sys/types.h>
#include<sys/stat.h>

#define MAX_SIZE 100

#define KEY 120

int main()
{
	int seg_id ;

	seg_id = shmget (KEY, MAX_SIZE, IPC_EXCL | S_IRUSR | S_IWUSR);

	printf("Segment Id %d",seg_id);
	
	char * a;

	a = (char *) shmat (seg_id, NULL, 0);

	printf ("%s", a);

    	printf ("\n");
   	shmdt (a);

	shmctl (seg_id, IPC_RMID, NULL);
   	return 0;
}
