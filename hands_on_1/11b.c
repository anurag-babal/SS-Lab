#include<unistd.h>
#include<fcntl.h>
#include<stdio.h>

int main(void) {
	int fd = open("tmp", O_RDWR);
	int fd_dup2 = dup2(fd, 7);

	write(fd_dup2, "ABCDE", 5);
	write(fd, "FGHIJ", 5);
	write(fd_dup2, "12345\n", 6);
	getchar();

	return 0;
}
