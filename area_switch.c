#include <stdio.h>

int main()
{
    int choice;
    float r,l,b;

    printf("1.Circle\n2.Rectangle\n");
    printf("Enter choice: ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
            printf("Enter radius: ");
            scanf("%f",&r);
            printf("Area = %.2f",3.14*r*r);
            break;

        case 2:
            printf("Enter length and breadth: ");
            scanf("%f %f",&l,&b);
            printf("Area = %.2f",l*b);
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}