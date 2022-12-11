#include <stdio.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

#define MAX_SIZE 100

#define KEY 120

int main ()
{
   char * shared_memory;
   char MSG_SIZE[MAX_SIZE];  
   int seg_id = 0;

   seg_id = shmget (KEY, MAX_SIZE, IPC_CREAT | IPC_EXCL | S_IRUSR | S_IWUSR);

   printf ("Segment Id %d \n", seg_id);

   shared_memory = (char *) shmat (seg_id, NULL, 0);

   printf("Process attached at %p\n",shared_memory);   
  
   printf("Enter some data to write to shared memory\n");  

   read(0,MSG_SIZE,MAX_SIZE);  

   strcpy(shared_memory,MSG_SIZE);
    
   printf("You wrote : %s\n",shared_memory); 
   
   shmdt (shared_memory);
   return 0;
}
