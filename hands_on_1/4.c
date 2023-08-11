#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>

int main(void) {
	int fd = open("abc", O_RDWR);
	while(1);
	return 0;
}
