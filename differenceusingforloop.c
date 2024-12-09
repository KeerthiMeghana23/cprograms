#include <stdio.h>8
void main()
{
    int i,n,sumeven=0,sumodd=0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;++i)
    {
        if(i%2==0)
        {
        sumeven=sumeven+i;
        }
        else
        {
            sumodd=sumodd+i;
        }}
        printf("The difference is %d",abs(sumeven-sumodd));
}
