#include <stdio.h>

int main()
{
    int number, first, last, temp, divisor = 1, middle;

    printf("Enter a number: ");
    scanf("%d", &number);

    temp = number;

    last = number % 10;

    while (temp >= 10)
    {
        temp = temp / 10;
        divisor = divisor * 10;
    }

    first = temp;

    middle = (number % divisor) / 10;

    number = last * divisor + middle * 10 + first;

    printf("%d", number);

    return 0;
}