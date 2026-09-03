#include <stdio.h>

int main()
{
    int number, remainder, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    while (number != 0)
    {
        remainder = number % 10;
        sum = sum + remainder;
        number = number / 10;
    }

    printf("%d", sum);

    return 0;
}