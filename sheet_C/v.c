/*
 *  sheet (c)   => V. Frequency Array
 */


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    int n, m;

    scanf("%d %d", &n, &m);
    long long arr[n];
    long long frequency[1000000] = {0};

    for (i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
        frequency[arr[i]] += 1;
    }

    for (i = 1; i <= m; i++)
    {
        printf("%lld\n", frequency[i]);
    }
    return 0;
}