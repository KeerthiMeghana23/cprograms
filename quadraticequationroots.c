#include <stdio.h>
#include<math.h>
void main()
{
    int a,b,c,d;
    float r1,r2;
    printf("enter the values of a,b,c");
    scanf("%d%d%d",&a,&b,&c);
    d=(b*b)-(4*a*c);
    if(d>0)
    {
        r1=b+sqrt(d)/2*a;
        r2=b-sqrt(d)/2*a;
        printf("r1=%f,r2=%f",r1,r2);
}
else if(d==0)
{
    r1=-b/(2*a);
    r2=-b/(2*a);
printf("roots are real %f%f",r1,r2);
    }
    else if(d<0)
    {
        printf("rooots are imaginary");                             
    }
}
