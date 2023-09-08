#include<stdio.h>
#include<unistd.h>
#include<sched.h>

int main(void) {
	struct sched_param sch;

	int pid = getpid();
	int status = sched_getparam(pid, &sch);

	printf("Current process id: %d\n", pid);
	printf("Current priority is %d\n", sch.sched_priority);

	int priority = nice(10);
	printf("New priority is %d\n", priority);

	getchar();
	return 0;
}
