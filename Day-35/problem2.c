#include <stdio.h>

int main()
{
    int n, i, k, j, temp;
    int arr[100];

    scanf("%d", &n);

    // Read array elements
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Read number of rotations
    scanf("%d", &k);

    k = k % n;

    // Rotate array k times
    for (j = 0; j < k; j++)
    {
        temp = arr[n - 1];

        for (i = n - 1; i > 0; i--)
        {
            arr[i] = arr[i - 1];
        }

        arr[0] = temp;
    }

    // Print rotated array
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}