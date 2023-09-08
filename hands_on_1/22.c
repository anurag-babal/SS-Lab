#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main(void) {
	int fd = open("abc", O_RDWR | O_TRUNC);
	char* str;

	if(fork()) {
		str = "Child write\n";
		write(fd, str, strlen(str));
	} else {
		str = "Parent write\n";
		write(fd, str, strlen(str));
	}

	return 0;
}
