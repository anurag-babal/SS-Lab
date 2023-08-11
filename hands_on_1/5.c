#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main(void) {
	int fd1 = open("abc1", O_CREAT, S_IRUSR | S_IWUSR);
	int fd2 = open("abc2", O_CREAT, S_IRWXU);
	int fd3 = open("abc3", O_CREAT | O_EXCL, S_IWUSR);
	int fd4 = open("abc4", O_CREAT, S_IRUSR);
	int fd5 = open("abc5", O_CREAT, S_IWUSR | S_IRUSR);
	
	while(1);
	return 0;
}
