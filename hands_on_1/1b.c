#include<stdio.h>
#include<unistd.h>

int main(void) {
	if(link("abc", "abc_hl") == -1) {
		perror("Failed");
		return -1;
	}
	printf("Hard link created\n");
	return 0;
}
