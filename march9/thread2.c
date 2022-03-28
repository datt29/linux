#include<pthread.h>
#include<stdio.h>
#include<unistd.h>
void *startone(void *arg)
{
    int i;
    for(i=0;i<100;i++)
    printf("The one \n");
}
void *starttwo(void *arg)
{
    int i;
    for(i=0;i<100;i++)
    printf("**the two con\n");
}
main()
{
    pthread_t pt1,pt2;
    getchar();
    pthread_create(&pt1,NULL,startone,NULL);
    pthread_create(&pt1,NULL,starttwo,NULL);
    getchar();
    printf("End of main thread");
    return 0;
}