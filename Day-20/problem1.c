#include <stdio.h>

int main()
{
    int number, remainder, product = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    while (number != 0)
    {
        remainder = number % 10;

        if (remainder % 2 != 0)
        {
            product = product * remainder;
        }

        number = number / 10;
    }

    printf("%d", product);

    return 0;
}