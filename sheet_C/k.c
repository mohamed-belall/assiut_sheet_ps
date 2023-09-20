/*
 *  sheet (c)   =>   K. Sum Digits
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, x;
    long long sum = 0;

    scanf("%d", &n);
    char str[n];
    scanf("%s", &str);

    for (i = 0; i < n; i++)
    {
        x = str[i] - '0';
        sum += x;
    }

    printf("%lld", sum);

    return 0;
}