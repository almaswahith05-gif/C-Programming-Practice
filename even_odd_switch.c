#include <stdio.h>

int main()
{
    int choice;

    printf("Enter number: ");
    scanf("%d",&choice);

    switch(choice%2)
    {
        case 0:
            printf("Even");
            break;

        case 1:
            printf("Odd");
            break;
    }

    return 0;
}