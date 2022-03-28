#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char *str1="linux";
    char *str2="kernel";
    char *name=(char *)alloca(strlen(str1)+strlen(str2));
    stpcpy(stpcpy(name,str1),str2);
    printf("The copied string data is = %s\n",name);
    return 0;
}