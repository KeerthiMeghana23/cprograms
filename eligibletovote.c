#include <stdio.h>
void main()
{
    int age;
    printf("enter the age");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("eligible to vote");
    }
    else
    {
        printf("not eligible to vote");
    }
}
