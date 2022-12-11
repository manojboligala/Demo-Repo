#include<stdlib.h>  
#include<stdio.h>  
#include<string.h>  
#include<unistd.h>  
#include<sys/types.h>  
#include<sys/ipc.h>  
#include<sys/msg.h>
#include<sys/stat.h>

 struct my_msg{  
         long int msg_type;  
         char some_text[BUFSIZ];  
 }message;  
 int main()  
 {
 	  key_t key; 
         int running=1;  
         int msgid;  
         key = ftok("progfile",65);  
         long int msg_to_rec=1;

         msgid=msgget(key, IPC_CREAT | S_IRUSR | S_IWUSR); 

         while(running)  
         {  
                 msgrcv(msgid,&message,BUFSIZ,msg_to_rec,0);                   
                 printf("Data received: %s\n",message.some_text);  
                 if(strncmp(message.some_text,"end",3)==0)  
                 {  
                         running=0;  
                 }  
         }  
          msgctl(msgid,IPC_RMID,NULL);  
 }  
