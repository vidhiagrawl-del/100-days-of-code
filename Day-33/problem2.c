#include <stdio.h>

int main()
{
    int n, i, element, pos;
    int arr[100];

    scanf("%d", &n);

    // Read sorted array
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Read element to insert
    scanf("%d", &element);

    // Find appropriate position
    pos = n;

    for (i = 0; i < n; i++)
    {
        if (element < arr[i])
        {
            pos = i;
            break;
        }
    }

    // Shift elements to the right
    for (i = n; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    // Insert element
    arr[pos] = element;
    n++;

    // Print updated array
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}