/*
 *  sheet (c)   => Y. Range sum query
 */


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;

    long long n, q;

    scanf("%lld %lld", &n, &q);

    long long arr[n + 1];
    long long summ[n + 1];
    summ[0] = 0;

    for (i = 1; i <= n; i++)
    {
        scanf("%lld", &arr[i]);
        summ[i] = summ[i - 1] + arr[i];
    }

    long long l, r;

    while (q--)
    {

        scanf("%lld %lld", &l, &r);
        long long sum_range = summ[r] - summ[l - 1];
        printf("%lld\n", sum_range);
    }

    return 0;
}