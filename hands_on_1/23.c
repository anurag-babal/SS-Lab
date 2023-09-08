#include<stdio.h>
#include<unistd.h>

int main(void) {
	if(fork()) {
		//sleep(100);
		getchar();
	} else {
		printf("Child process id : %d\n", getpid());
	}
	return 0;
}
