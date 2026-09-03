#include <stdio.h>

int main()
{
    int number, original, remainder, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    original = number;

    while (number != 0)
    {
        remainder = number % 10;

        sum = sum + (remainder * remainder * remainder);

        number = number / 10;
    }

    if (original == sum)
    {
        printf("Armstrong");
    }
    else
    {
        printf("Not Armstrong");
    }

    return 0;
}