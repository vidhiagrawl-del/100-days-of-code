#include <stdio.h>

int main()
{
    int n, i, pos;
    int arr[100];

    scanf("%d", &n);

    // Read array elements
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Read position to delete
    scanf("%d", &pos);

    // Shift elements to the left
    for (i = pos; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    // Reduce array size
    n--;

    // Print updated array
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}