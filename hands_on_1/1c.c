/*
============================================================================
Name : 1c.c
Author : Anurag Babal
Description : Create the following types of a files using (i) shell command (ii) system call
	c. FIFO (mkfifo Library Function or mknod system call)
Date: 11th Aug, 2023.
============================================================================
*/

#include<stdio.h>
#include<unistd.h>
#include<sys/stat.h>

int main(void) {
	if(mknod("myfifo", S_IFIFO, 0)) {
		perror("Failed to create named pipe");
		return -1;
	}
	printf("Named pipe created\n");
	return 0;
}
