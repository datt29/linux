#include<pthread.h>
#include<stdio.h>
#include<stdlib.h>
static void* tfunc(void *arg)
{
    char *s=(char *)arg;
    printf("%s\n",s);
    return 0;

}
int main(int argc,char *argv[])
{
    pthread_t t1;
    void *res;
    int s;
    pthread_create(&t1,NULL,tfunc,"Hello world");
    printf("MEssage from main:");
    sleep(3);
    exit(0);
}
