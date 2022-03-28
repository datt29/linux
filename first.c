#include<stdio.h>
#include<string.h>
struct student 
{
    int roll;
    char name[30],gender;
    float height;

}first;
int main()
{
    struct student second;
    struct student third={103,"Hari prasad D",'M',5.11};
    printf("\nRoll \t\t\t\t\t\t\t\tGender \t Height\n");
    first.roll=101;
    strcpy(first.name,"Raj kumar");
    first.gender='M';
    first.height=5.6;
    printf("\n %3d\t%-40s\t%c\t%1.2f",first.roll,first.name,first.gender,first.height);
    printf("\n %3d\t%-40s\t%c\t%1.2f",third.roll,third.name,third.gender,third.height);

}