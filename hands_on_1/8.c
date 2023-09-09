/*
============================================================================
Name : 8.c
Author : Anurag Babal
Description : Write a program to open a file in read only mode, read line by line and display each line as it is read.
	Close the file when end of file is reached.
Date: 20th Aug, 2023.
============================================================================
*/

#include<unistd.h>
#include<fcntl.h>

int main(int argc, char* argv[]) {
	int fd_src, count = 0;
	char ch, buff[20] = "Invalid syntax\n";
	if(argc != 2) {
		//*buff[] = "Invalid syntax";
		write(1, buff, sizeof(buff));
		return -1;
	}
	fd_src = open(argv[1], O_RDONLY);
	while((read(fd_src, &ch, 1)) > 0) {
		if(ch != '\n')	buff[count++] = ch;
		else {
			buff[count++] = '\n';
			write(STDOUT_FILENO, buff, count);
			count = 0;
		}
	}
	close(fd_src);
	return 0;
}
