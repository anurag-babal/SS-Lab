/*
============================================================================
Name : 1a.c
Author : Anurag Babal
Description : Create the following types of a files using (i) shell command (ii) system call
	a. soft link (symlink system call)
Date: 11th Aug, 2023.
============================================================================
*/

#include<unistd.h>
#include<stdio.h>

int main(void) {
	int status = symlink("abc", "abc_symlink");
	if(status) {
		perror("Failed");
		return 1;
	}
	printf("Sym link created\n");
	return 0;
}
