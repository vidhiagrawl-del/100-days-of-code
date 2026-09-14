#include <stdio.h>

int main()
{
    int n, i, key, found = -1;
    int arr[100];

    scanf("%d", &n);

    // Read array elements
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Read the element to search
    scanf("%d", &key);

    // Linear search
    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            found = i;
            break;
        }
    }

    if (found != -1)
    {
        printf("Found at index %d", found);
    }
    else
    {
        printf("-1");
    }

    return 0;
}