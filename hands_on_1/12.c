#include<unistd.h>
#include<fcntl.h>
#include<stdio.h>

int main(void) {
	int fd = open("tmp", O_RDONLY);
	printf("%d\n", fcntl(fd, F_GETFL));
	return 0;
}
