/*
============================================================================
Name : 10.c
Author : Anurag Babal
Description : Write a program to open a file with read write mode, write 10 bytes, move the file pointer by 10
bytes (use lseek) and write again 10 bytes.
	a. check the return value of lseek
Date: 20th Aug, 2023.
============================================================================
*/

#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdio.h>

int main(void) {
	int fd;
	fd = open("tmp", O_RDWR|O_CREAT, 0744);
	write(fd, "1234567890", 10);
	lseek(fd, 10, SEEK_CUR);
	write(fd, "ABCDEFGHIJ", 10);
	printf("lseek value = %d\n", (int)lseek(fd, 0, SEEK_CUR));
	return 0;
}
