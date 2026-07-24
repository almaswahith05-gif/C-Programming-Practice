#include <stdio.h>

int main()
{
    char grade;

    printf("Enter grade: ");
    scanf("%c",&grade);

    switch(grade)
    {
        case 'A':
            printf("Excellent");
            break;

        case 'B':
            printf("Very Good");
            break;

        case 'C':
            printf("Good");
            break;

        default:
            printf("Invalid grade");
    }

    return 0;
}