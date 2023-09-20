/*
============================================================================
Name : 19c.c
Author : Anurag Babal
Description : Create a FIFO file by
    mknod system call
Date: 19th Sept, 2023.
============================================================================
*/

#include<unistd.h>
#include<sys/stat.h>

int main(void) {
    mknod("fifo", S_IFIFO | 0666, 0);

    return 0;
}
