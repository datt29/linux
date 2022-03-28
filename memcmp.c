#include<stdio.h>
#include<string.h>
int main()
{
    char buf1[10];
    char buf2[10];
    int ret;
    memcpy(buf1,"madam",5);
    memcpy(buf2,"mad",5);
    ret=memcmp(buf1,buf2,5);
    if(ret>0)
    {
        printf("Buf1 is greater than buf2");

    }
    else if(ret<0)
    {
        printf("buf1 ios less than buff2");

    }
    else{
        printf("B?oth are equeal");
    }
return 0;
}