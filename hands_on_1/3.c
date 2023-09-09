/*
============================================================================
Name : 3.c
Author : Anurag Babal
Description :  Write a program to create a file and print the file descriptor value. Use creat ( ) system call
Date: 11th Aug, 2023.
============================================================================
*/

#include<stdio.h>
#include<unistd.h>
#include<sys/stat.h>
#include<fcntl.h>

int main(void) {
	int fd = creat("abc", S_IRUSR | S_IWUSR);
       	printf("File created with fd = %d\n", fd);	
	return 0;
}
