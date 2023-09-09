/*
============================================================================
Name : 1b.c
Author : Anurag Babal
Description : Create the following types of a files using (i) shell command (ii) system call
	b. hard link (link system call)
Date: 11th Aug, 2023.
============================================================================
*/

#include<stdio.h>
#include<unistd.h>

int main(void) {
	if(link("abc", "abc_hl") == -1) {
		perror("Failed");
		return -1;
	}
	printf("Hard link created\n");
	return 0;
}
