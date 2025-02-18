#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i, *arr2;
    scanf("%d", &num);
    arr = (int *)malloc(num * sizeof(int));
    for (i = 0; i < num; i++)
    {
        scanf("%d", arr + i);
    }

    arr2 = (int *)malloc(num * sizeof(int));
    for (i = num - 1; i >= 0; i--)
    {
        *(arr2++) = *(arr + i);
    }
    /* Write the logic to reverse the array. */
    arr2 -= num;
    arr = arr2;
    for (i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}
