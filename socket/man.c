#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<sys/types.h>
#include<string.h>
//#define MAX_SIZE 1000

void error(const char*msg)
{
	perror(msg);
	exit(1);
}

int main(int argc, char *argv[])
{
	if(argc < 2)
	{
		fprintf(stderr, "Port NO not provided. Program Terminated\n");
		exit(1);
	}

	// 1. Create a socket
	int sockfd = 0;
	int newsockfd, portno;
	struct sockaddr_in server;
        char msg[];

}
