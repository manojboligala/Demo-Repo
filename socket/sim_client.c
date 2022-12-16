#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <pthread.h>


int main()
{
	struct sockaddr_in server; //This is our main socket variable.
        int fd; //This is the socket file descriptor that will be used to identify the socket
        int conn; //This is the connection file descriptor that will be used to distinguish client connections.
    	char message[100] = ""; //This array will store the messages that are sent by the server
    	
    	fd = socket(AF_INET, SOCK_STREAM, 0);
	server.sin_family = AF_INET;
	server.sin_port = htons(8098);
	inet_pton(AF_INET, "127.0.0.1", &server.sin_addr); //This binds the client to localhost
	connect(fd, (struct sockaddr *)&server, sizeof(server)); //This connects the client to the server.
	while(1) {
    	printf("Enter a message: ");
    	fgets(message, 100, stdin);
    	send(fd, message, strlen(message), 0);
    	//An extra breaking condition can be added here (to terminate the while loop)
}

}
