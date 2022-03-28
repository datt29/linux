#include<stdio.h>
#include<stdlib.h>
void callback1(void)
{
    printf("Callback1 called");
}
void callback2(void)
{
    printf("Callback2 called");

}
void callback3(void)
{
    printf("Callback3 called");
}
int main()
{
    printf("Registering the function callback1");
    atexit(callback1);
    printf("Registering the function callback2");
    atexit(callback2);
    printf("Registering the function callback3");
    atexit(callback3);
    
}