/*
============================================================================
Name : 12.c
Author : Anurag Babal
Description : Write a program to find out the opening mode of a file. Use fcntl.
Date: 20th Aug, 2023.
============================================================================
*/

#include<unistd.h>
#include<fcntl.h>
#include<stdio.h>

int main(void) {
	int fd = open("tmp", O_RDWR);
	int mode = fcntl(fd, F_GETFL);
	
	if (mode & O_RDONLY)
    		printf("The file is opened in read mode.\n");
	else if (mode & O_WRONLY)
		printf("The file is opened in write mode.\n");
  	else if (mode & O_RDWR)
    		printf("The file is opened in read-write mode.\n");

	return 0;
}
