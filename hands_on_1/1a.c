#include<unistd.h>
#include<stdio.h>

int main(void) {
	int status = symlink("abc", "abc_symlink");
	if(status) {
		perror("Failed");
		return 1;
	}
	printf("Sym link created\n");
	return 0;
}
