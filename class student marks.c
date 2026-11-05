#include<stdio.h>
struct student
{
    int rollno;
    char name[20];
    int chem;
    int phys;
    int maths;
};

int main()
{
    struct student s;
    int i;
    for(i=0;i<5;i++)
    {
        printf("enter the student rollno");
        scanf("%d",&s.rollno);
        printf("enter student name");
        scanf("%s",&s.name);
        printf("enter the marks of chemisty");
        scanf("%d",&s.chem);
        printf("enter the marks of physics");
        scanf("%d",&s.phys);
        printf("enter the marks of  maths");
        scanf("%d",&s.maths);
        printf("details of students are \n %d,%s,%d,%d,%d",s.rollno,s.name,s.chem,s.phys,s.maths);
    }
    return 0;
}