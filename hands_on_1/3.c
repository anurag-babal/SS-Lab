#include<stdio.h>
#include<unistd.h>
#include<sys/stat.h>
#include<fcntl.h>

int main(void) {
	int fd = creat("abc", S_IRUSR | S_IWUSR);
       	printf("File created with fd = %d\n", fd);	
	return 0;
}
