/*
============================================================================
Name : 11a.c
Author : Anurag Babal
Description : Write a program to open a file, duplicate the file descriptor and append the file with both the
descriptors and check whether the file is updated properly or not.
	a. use dup
Date: 20th Aug, 2023.
============================================================================
*/

#include<unistd.h>
#include<fcntl.h>
#include<stdio.h>

int main(void) {
	int fd = open("tmp", O_RDWR);
	int fd_dup = dup(fd);

	write(fd_dup, "12345", 5);
	write(fd, "67890", 5);
	write(fd_dup, "ABCDE\n", 6);

	return 0;
}
