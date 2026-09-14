#include <stdio.h>

int main()
{
    int n, i;
    int arr[100];
    int largest, secondLargest;

    scanf("%d", &n);

    // Read array elements
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Initialize largest and second largest
    if (arr[0] > arr[1])
    {
        largest = arr[0];
        secondLargest = arr[1];
    }
    else
    {
        largest = arr[1];
        secondLargest = arr[0];
    }

    // Check remaining elements
    for (i = 2; i < n; i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }
    }

    printf("%d", secondLargest);

    return 0;
}