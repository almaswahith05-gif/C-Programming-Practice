#include <stdio.h>

int main()
{
    char op;
    int a,b;

    printf("Enter operator (+,-,*,/): ");
    scanf("%c",&op);

    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);

    switch(op)
    {
        case '+':
            printf("%d",a+b);
            break;

        case '-':
            printf("%d",a-b);
            break;

        case '*':
            printf("%d",a*b);
            break;

        case '/':
            printf("%d",a/b);
            break;

        default:
            printf("Invalid operator");
    }

    return 0;
}