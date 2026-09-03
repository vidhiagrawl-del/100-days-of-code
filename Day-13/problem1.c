#include <stdio.h>

int main()
{
    int num1, num2;
    char operator;

    printf("Enter two numbers and an operator: ");
    scanf("%d %d %c", &num1, &num2, &operator);

    switch (operator)
    {
        case '+':
            printf("%d", num1 + num2);
            break;

        case '-':
            printf("%d", num1 - num2);
            break;

        case '*':
            printf("%d", num1 * num2);
            break;

        case '/':
            if (num2 != 0)
                printf("%d", num1 / num2);
            else
                printf("Cannot divide by zero");
            break;

        case '%':
            if (num2 != 0)
                printf("%d", num1 % num2);
            else
                printf("Cannot divide by zero");
            break;

        default:
            printf("Invalid operator");
    }

    return 0;
}