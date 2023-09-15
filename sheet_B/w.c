/*
 *	 W. Shape3
 */

#include <stdio.h>

int main()
{
    int i, t, numOfSymbol = 1, j, temp;
    scanf("%d", &t);
    temp = t;
    while (t--)
    {
        for (i = 0; i < t; i++)
            printf(" ");
        for (j = 0; j < numOfSymbol; j++)
            printf("*");

        numOfSymbol += 2;
        printf("\n");
    }

    while (t != temp)
    {
        numOfSymbol -= 2;
        t++;
        for (i = 0; i < t; i++)
            printf(" ");
        for (j = 0; j < numOfSymbol; j++)
            printf("*");

        printf("\n");
    }
    return 0;
}