#include <stdio.h>
struct time
{
    int time1;
    int time2;
};

int main()
{
    struct time t;
    int difference;
    printf("enter a time in hours");
    scanf("%d",&t.time1);
     printf("enter a time in hours");
    scanf("%d",&t.time2);
    difference =t.time1 - t.time2;
    printf(" the differencr between twotimes is %d",difference);
    return 0;
}