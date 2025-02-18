#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;           // Variable to hold the size of the array
    scanf("%d", &n); // Read the size of the array

    // Dynamically allocate memory for the array
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL)
    { // Check if memory allocation was successful
        printf("Memory allocation failed\n");
        return 1;
    }

    // Read the elements of the array
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Calculate the sum of the array elements
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    // Print the sum
    printf("%d\n", sum);

    // Free the allocated memory
    free(arr);

    return 0;
}
