#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// Complete the following function.

void calculate_the_maximum(int n, int k)
{
    int s = (n > k) ? n : k;
    int max_and = 0, max_or = 0, max_xor = 0;
    for (int i = 1; i < s; i++)
    {
        for (int j = i + 1; j <= s; j++)
        {
            if (((i & j) > max_and) && ((i & j) < k))
                max_and = (i & j);
            if (((i | j) > max_or) && ((i | j) < k))
                max_or = (i | j);
            if (((i ^ j) > max_xor) && ((i ^ j) < k))
                max_xor = (i ^ j);
        }
    }
    printf("%d\n%d\n%d", max_and, max_or, max_xor);
}

int main()
{
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}
