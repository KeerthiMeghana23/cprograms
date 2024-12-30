#include <stdio.h>
void main()
{
    int i,j,k,m;
    for(i=1;i<=5;++i)
    {
        for(j=1;j<=i;++j)
        {
            printf("*");
        }
        printf("\n");
    }
        for(k=1;k<=5;++k)
        {
        for(m=5;m>=k;--m)
        {
            printf("*");
        }
        printf("\n");   
        }
}
