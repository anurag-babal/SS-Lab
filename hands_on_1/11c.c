#include<unistd.h>
#include<fcntl.h>
#include<stdio.h>

int main(void) {
	int fd = open("tmp", O_RDWR);
	int fd_fcntl = fcntl(fd, F_DUPFD, 9);

	write(fd_fcntl, "ZYXWV", 5);
	write(fd, "UTSRQ", 5);
	write(fd_fcntl, "98765\n", 6);
	getchar();

	return 0;
}
