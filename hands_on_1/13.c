/*
============================================================================
Name : 13.c
Author : Anurag Babal
Description : Write a program to wait for a STDIN for 10 seconds using select. Write a proper print statement to
verify whether the data is available within 10 seconds or not (check in $man 2 select).
Date: 20th Aug, 2023.
============================================================================
*/

#include<sys/select.h>
#include<stdio.h>

int main(void) {
	int success;
	fd_set rfds;
	struct timeval timeout;

	FD_ZERO(&rfds);
	FD_SET(0, &rfds);
	timeout.tv_sec = 10;
	success = select(1, &rfds, NULL, NULL, &timeout);

	if(success == -1) { 
		printf("Error\n");
		return -1;
	} else if(success) printf("Data is available now\n");
	else printf("No data is available\n");
	
	return 0;
}
