#include <stdio.h>
void main()
{
    int month;
    printf("Enter the month");
    scanf("%d",&month);
    switch(month)
    {
        case 1:printf("%d is January");
        break;
        case 2:printf("%d is feburary");
        break;
        case 3:printf("%d is march");
        break;
        case 4:printf("%d is april");
        break;
        case 5:printf("%d is may");
        break;
        case 6:printf("%d is June");
        break;
        case 7:printf("%d is July");
        break;
        case 8:printf("%d is August");
        break;
        case 9:printf("%d is September");
        break;
        case 10:printf("%d is october");
        break;
        case 11:printf("%d is November");
        break;
        case 12:printf("%d is december");
        break;
        default:printf("Invalid month");
        break;
    }
}
