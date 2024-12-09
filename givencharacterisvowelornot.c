#include <stdio.h>
void main()
{
    char ch;
    printf("Enter the character:");
    scanf("%c",&ch);
    switch(ch)
    {
        case'a':
        case'e':
        case'i':
        case'0':
        case'u':printf("%c is vowel",ch);
        break;
        default:printf("%c is not vowel",ch);
        break;
    }
}
