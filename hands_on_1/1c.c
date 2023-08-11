#include<stdio.h>
#include<unistd.h>
#include<sys/stat.h>

int main(void) {
	if(mknod("myfifo", S_IFIFO, 0)) {
		perror("Failed to create named pipe");
		return -1;
	}
	printf("Named pipe created\n");
	return 0;
}
