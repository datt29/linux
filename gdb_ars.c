#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
    int i;
    printf("\n File Name :%s\n",argv[0]);
    printf("\n Total number of Arguments : %d",argc);
    printf("\n Argument PAssed:");
    for(i=1;i<argc;i++)
    printf("%s",argv[i]);
    printf("\n");
    return 0;

}