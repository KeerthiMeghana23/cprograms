#include <stdio.h>
void main()
{
    int i,n,c;
    int a=0,b=1;
    printf("enter the value of n:");
    scanf("%d",&n);
    printf("the values %d %d\t",a,b);
    for(i=2;i<n;++i)
    {
        c=a+b;
        printf("%d\t",c);
    a=b;
    b=c;
   }
}
