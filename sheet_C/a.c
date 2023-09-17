/*
 *	sheet (c)   =>    A. Summation
 */

#include <stdio.h>

int main()
{
    int n, i;
    scanf("%d", &n);
    long long arr[n], sum = 0;

    for (i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {

        sum += arr[i];
    }
    if (sum < 0)
        sum *= -1;
    printf("%lld", sum);

    return 0;
}