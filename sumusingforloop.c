#include <stdio.h>
void main()
{
    int i,n,sum=0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;++i)
    {
        sum=sum+i;
    }
        printf("The sum is %d",sum);
}
