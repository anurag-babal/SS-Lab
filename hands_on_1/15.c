/*
============================================================================
Name : 15.c
Author : Anurag Babal
Description : Write a program to display the environmental variable of the user (use environ).
Date: 20th Aug, 2023.
============================================================================
*/

#include<unistd.h>
#include<stdio.h>

int main(void) {
	extern char **environ;
	int i = 0;
	while(environ[i] != NULL) 
		printf("%s\n", environ[i++]);
	return 0;
}
