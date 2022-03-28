#include<stdio.h>
#include<unistd.h>
/*int main()
{
	printf("Hi\n");
	fork();
	fork();
	
	printf("bye\n");
	while(1)
	return 0;
	
}*/

int main(void)
{
	int pid_1;
	printf("Current pid === %d\n",getpid());
	pid_1 = fork();
	if(pid_1==0)
	{
		printf("New child process pid - %d \n",getpid());
		printf("New child parent process - %d\n",getppid());
		
	}
	else
	{x
		sleep(3); 
		printf("parent process pid - %d \n",getpid());
		printf("parentchild parent process - %d\n",getppid());
	}
	while(1);
	return(0);
	
}
