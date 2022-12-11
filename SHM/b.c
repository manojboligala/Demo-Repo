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

 	char buff[100];  

	seg_id = shmget (KEY, MAX_SIZE, IPC_EXCL | S_IRUSR | S_IWUSR);

	printf("Segment Id %d\n",seg_id);
	
	char * shared_memory;

	shared_memory = (char *) shmat (seg_id, NULL, 0);

      	printf("Process attached at %p\n",shared_memory);
      	  
   	printf("Data read from shared memory is : %s\n",shared_memory);  
   	
   	
   	shmdt (shared_memory);

	shmctl (seg_id, IPC_RMID, NULL);
   	return 0;
}
