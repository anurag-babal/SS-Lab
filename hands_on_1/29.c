#include<stdio.h>
#include<sched.h>

int main(void) {
	int policy = sched_getscheduler(0);
	printf("Current policy = %d\n", policy);

	return 0;
}
