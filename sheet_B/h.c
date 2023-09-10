/*
 *	One Prime
 */

#include <stdio.h>

int main()
{
    int x, flag = 0, j;

    scanf("%d", &x);

    for (j = 1; j <= x; j++)
    {
        if (x % j == 0)
            flag++;

        if (flag > 2)
            break;
    }

    if (flag == 2)
        printf("YES");
    else
        printf("NO");

    return 0;
}
