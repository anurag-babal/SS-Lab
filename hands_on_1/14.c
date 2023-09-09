/*
============================================================================
Name : 14.c
Author : Anurag Babal
Description : Write a program to find the type of a file.
Date: 20th Aug, 2023.
============================================================================
*/

#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<stdio.h>

int main(int argc, char* argv[]) {
	char *type;
	struct stat st;
	if(argc != 2) {
		printf("%s filename\n", argv[0]);
		return -1;
	}
	stat(argv[1], &st);
	switch(st.st_mode & S_IFMT) {
		case S_IFBLK: 
			type = "Block"; 
			break;
		case S_IFCHR:
			type = "Character";
			break;
		case S_IFDIR:
			type = "Directory";
			break;
		case S_IFIFO:
			type = "FIFO";
			break;
		case S_IFLNK:
			type = "Symlink";
			break;
		case S_IFREG:
			type = "Regular";
			break;
		case S_IFSOCK:
			type = "Socket";
			break;
		default:
			type = "Unknown";
	}
	printf("%s\n", type);
	return 0;
}

