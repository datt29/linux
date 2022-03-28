#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr,*pt,*p;
    *ptr=100;
    *pt=10;
    *p=NULL;
    printf("%d",*ptr);
    printf("%d",*pt);
    printf("%d",*p);
    free(ptr);
    free(pt);
    free(p);
    free(ptr);
    return 0;
}
