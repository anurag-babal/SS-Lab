/*
============================================================================
Name : 11c.c
Author : Anurag Babal
Description : Write a program to open a file, duplicate the file descriptor and append the file with both the
descriptors and check whether the file is updated properly or not.
	c. use fcntl
Date: 20th Aug, 2023.
============================================================================
*/

#include<unistd.h>
#include<fcntl.h>
#include<stdio.h>

int main(void) {
	int fd = open("tmp", O_RDWR);
	int fd_fcntl = fcntl(fd, F_DUPFD, 9);

	write(fd_fcntl, "ZYXWV", 5);
	write(fd, "UTSRQ", 5);
	write(fd_fcntl, "98765\n", 6);
	getchar();

	return 0;
}
