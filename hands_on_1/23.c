/*
============================================================================
Name : 23.c
Author : Anurag Babal
Description : Write a program to create a Zombie state of the running program.
Date: 08th Sept, 2023.
============================================================================
*/

#include<stdio.h>
#include<unistd.h>

int main(void) {
	if(fork()) {
		//sleep(100);
		getchar();
	} else {
		printf("Child process id : %d\n", getpid());
	}
	return 0;
}
