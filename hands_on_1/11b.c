/*
============================================================================
Name : 11b.c
Author : Anurag Babal
Description : Write a program to open a file, duplicate the file descriptor and append the file with both the
descriptors and check whether the file is updated properly or not.
	b. use dup2
Date: 20th Aug, 2023.
============================================================================
*/

#include<unistd.h>
#include<fcntl.h>
#include<stdio.h>

int main(void) {
	int fd = open("tmp", O_RDWR);
	int fd_dup2 = dup2(fd, 7);

	write(fd_dup2, "ABCDE", 5);
	write(fd, "FGHIJ", 5);
	write(fd_dup2, "12345\n", 6);
	getchar();

	return 0;
}
