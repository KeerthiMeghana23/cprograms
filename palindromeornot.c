#include <stdio.h>
void main()
{
    int n,rem,rev=0,temp;
    printf("Enter the value of n:");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        rem =n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(temp==rev)
    {
        printf("%d is palindrome:");
    }
    else
    {
     printf("%d is not a palindrome:");
    }
}
