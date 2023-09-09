/*
============================================================================
Name : 6.c
Author : Anurag Babal
Description : Write a program to copy file1 into file2 ($cp file1 file2).
Date: 20th Aug, 2023.
============================================================================
*/

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main(int argc, char* argv[]) {
	int fd_src, fd_dst, count;
	char buff[20];
	if(argc != 3) {
		printf("Syntax incorrect\n");
		return -1;
	}
	fd_src = open(argv[1], O_RDONLY);
	fd_dst = open(argv[2], O_WRONLY | O_CREAT, 0744);
	while((count=read(fd_src, buff, sizeof(buff))) > 0) {
		count = write(fd_dst, buff, count);
		if(count == -1) {
			printf("Error writing file\n");
			return -1;
		}
		printf("%d bytes written to file\n", count);
	}
	close(fd_src);
	close(fd_dst);
	return 0;
}
