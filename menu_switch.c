#include <stdio.h>

int main()
{
    int choice;

    printf("1.Print Hello\n2.Print Welcome\n");
    printf("Enter choice: ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
            printf("Hello");
            break;

        case 2:
            printf("Welcome");
            break;

        default:
            printf("Wrong choice");
    }

    return 0;
}