/*
 *  sheet (c)   =>  P. Minimize Number
 */

#include <stdio.h>

int main()
{
    int n;
    int i, flag = 0, count = 0;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    while (!flag)
    {
        for (i = 0; i < n; i++)
        {
            if ((arr[i] % 2) != 0)
            {
                flag++;
                break;
            }
            arr[i] /= 2;
        }
        count++;
    }
    printf("%d", count - 1);
    return 0;
}