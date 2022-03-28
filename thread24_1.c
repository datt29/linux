#include<stdio.h>
#include<pthread.h>



pthread_t tid1,tid2;
void* thread1(void *arg)
{
printf("newly created thread is excecuting\m");
return NULL;
}
void* thread2(void *arg)
{
printf("newly created thread is excecuting\m");
return NULL;
}

int main(void)
{
int ret=pthread_create(&tid1,NULL,thread1,NULL);



if(ret)
{
printf("thread is not created\n");
}
else
{
printf("thread is created \n");
pthread_join(tid1,NULL);




}
int ret2=pthread_create(&tid2,NULL,thread2,NULL);
if(ret2)
{
printf("thread is not created\n");
}
else
{
printf("thread is created \n");
//pthread_join(tid2,NULL);
sleep(2);



}
return 0;
}