/*
 *	Multiplication table
 */

 #include <stdio.h>

int main()
{
    int i, n;
    scanf("%d", &n);
    int x;

    for (i = 1; i <= 12; i++)
    {
        printf("%d * %d = %d\n", n, i, n * i);
    }

    return 0;
}