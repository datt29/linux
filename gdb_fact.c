#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num;
    do
    {
        printf("Enter a number");
        scanf("%d",&num);

    }
    while(num<0);
    int fact;
    for(int i=0;i<num;i++)
    fact=fact*i;
    printf("%d!   = %d",num,fact);
    return 0;

}