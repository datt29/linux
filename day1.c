    //for single
    
    #include<stdio.h>
	#include<fcntl.h>
	#include<sys/types.h>
	#include<sys/stat.h>
	#include<unistd.h>
	
	int main(){
		int fd1,fd2;
		char readbuf[50];
		fd1=open("a1r.txt",O_RDONLY,777);
		fd2=open("a1w.txt",O_CREAT|O_RDWR,777);
		
		while((read(fd1,readbuf,50))>0){}
		printf("data from buffer: %s\n",readbuf);
		
		write(fd2,readbuf,300);
		close(fd1);
		close(fd2);
		return 0;	
    }