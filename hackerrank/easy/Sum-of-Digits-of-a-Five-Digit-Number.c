#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d", &n);
    int fifth = 0, forth = 0, third = 0, second = 0, first = 0;
    first = n % 10;
    n /= 10;
    second = n % 10;
    n /= 10;
    third = n % 10;
    n /= 10;
    forth = n % 10;
    n /= 10;
    fifth = n % 10;
    int res = first + second + third + forth + fifth;
    printf("%d", res);
    // Complete the code to calculate the sum of the five digits on n.
    return 0;
}
