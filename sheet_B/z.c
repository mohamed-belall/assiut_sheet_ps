/*
 *	 Z. Three Numbers
 */

#include <stdio.h>

int main()
{
    int k, s, x, y;
    int count = 0;
    scanf("%d %d", &k, &s);

    for (x = 0; x <= k; x++)

        for (y = 0; y <= k; y++)
            if (s - x - y >= 0 && s - x - y <= k)
                count++;

    printf("%d", count);
    return 0;
}