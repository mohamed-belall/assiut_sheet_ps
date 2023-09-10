/*
 *	Even Numbers
 */
#include <stdio.h>

int main()
{
    int i, n, flag = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
            flag++;
        }
    }
    if (!flag)
        printf("-1");

    return 0;
}