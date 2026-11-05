#include<stdio.h>
struct student
{
    int number;
    int rollno;
    char name[20];
    int marks;
};

int main()
{
    struct  student s;
    int i;
    for(i=0;i<=10;i++)
    {
        printf("enter the student number");
        scanf("%d",&s.number);
        printf("enter the student rollno");
        scanf("%d",&s.rollno);
        printf("enter the student name");
        scanf("%s",&s.name);
        printf("enter the student marks");
        scanf("%d",&s.marks);
        printf("details of student are \n %d,%d,%s,%d",s.number,s.rollno,s.name,s.marks);
    }
    return 0;
}