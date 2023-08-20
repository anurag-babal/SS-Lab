#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdio.h>

int main(void) {
	int fd;
	fd = open("tmp", O_RDWR|O_CREAT, 0744);
	write(fd, "1234567890", 10);
	lseek(fd, 10, SEEK_CUR);
	write(fd, "ABCDEFGHIJ", 10);
	printf("lseek value = %d\n", (int)lseek(fd, 0, SEEK_CUR));
	return 0;
}
