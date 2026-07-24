#include <stdio.h>

int main()
{
    int month;

    printf("Enter month number: ");
    scanf("%d",&month);

    switch(month)
    {
        case 1:
            printf("January");
            break;

        case 2:
            printf("February");
            break;

        case 3:
            printf("March");
            break;

        case 4:
            printf("April");
            break;

        case 5:
            printf("May");
            break;

        case 6:
            printf("June");
            break;

        default:
            printf("Invalid month");
    }

    return 0;
}