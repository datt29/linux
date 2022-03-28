#include<stdio.h>
#include<unistd.h>
int main(void)
{
	printf("My process id is %d",getpid());
	printf("My parent process id is %d",getppid());
	printf("linux kernel\n");
	while(1)
	return 0;
	
}
