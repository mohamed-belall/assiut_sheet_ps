/*
 *	 N. Numbers Histogram
 */


#include <stdio.h>

int main()
{
    int n, i, j;
    char s;
    int temp;
    scanf("%c %d", &s, &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &temp);
        for (j = 0; j < temp; j++)
        {
            printf("%c", s);
        }
        printf("\n");
    }

    return 0;
}