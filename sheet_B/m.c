/*
 *	 M Lucky Numbers
 */

#include <stdio.h>

int main()
{
    int a, b, i, temp, flag = 0, counter = 0;

    scanf("%d %d", &a, &b);

    for (i = a; i <= b; i++)
    {
        temp = i;
        while (temp)
        {
            if ((temp % 10 == 4) || (temp % 10 == 7))
            {
                flag = 1;
            }
            else
            {
                flag = 0;
                break;
            }
            temp /= 10;
        }
        if (flag)
        {
            printf("%d ", i);
            counter++;
        }
        flag = 0;
    }
    if (!counter)
        printf("-1");

    return 0;
}