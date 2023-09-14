/*
 *	 T. Shape2
 */


#include <stdio.h>

int main()
{
    int i, t, numOfSymbol = 1, j;
    scanf("%d", &t);

    while (t--)
    {
        for (i = 0; i < t; i++)
            printf(" ");
        for (j = 0; j < numOfSymbol; j++)
            printf("*");

        numOfSymbol += 2;
        printf("\n");
    }
    return 0;
}