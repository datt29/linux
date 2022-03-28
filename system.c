#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char buff_comm[5];
    strcpy(buff_comm,"ls -l");
    printf("system() library function use to fork to create a child proceess \n");
    printf("Child process executes execl() which load and run new program provided by ayatem() argument\n");
    system(buff_comm);
    return 0;

}