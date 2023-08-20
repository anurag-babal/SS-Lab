#include<unistd.h>
#include<fcntl.h>
#include<stdio.h>

int main(void) {
	int fd = open("tmp", O_RDWR);
	int fd_dup = dup(fd);

	write(fd_dup, "12345", 5);
	write(fd, "67890", 5);
	write(fd_dup, "ABCDE\n", 6);

	return 0;
}
