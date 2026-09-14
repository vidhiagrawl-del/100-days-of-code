#include <stdio.h>

int main()
{
    int rows, cols, i, j;
    int matrix[100][100];
    int sum = 0;

    // Read number of rows and columns
    scanf("%d %d", &rows, &cols);

    // Read matrix elements
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Find sum of all elements
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            sum = sum + matrix[i][j];
        }
    }

    printf("%d", sum);

    return 0;
}