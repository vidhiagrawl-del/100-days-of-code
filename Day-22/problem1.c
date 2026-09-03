#include <stdio.h>

int main()
{
    int number, original, remainder;
    int sum = 0, factorial, i;

    printf("Enter a number: ");
    scanf("%d", &number);

    original = number;

    while (number != 0)
    {
        remainder = number % 10;

        factorial = 1;

        for (i = 1; i <= remainder; i++)
        {
            factorial = factorial * i;
        }

        sum = sum + factorial;

        number = number / 10;
    }

    if (sum == original)
    {
        printf("Strong number");
    }
    else
    {
        printf("Not strong number");
    }

    return 0;
}