/*
 *  sheet (c)   =>   J. Lucky Array
 */

#include <stdio.h>

int main()
{
    int n, i, frequency = 0;
    int min = 10000000;
    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] < min)
            min = arr[i];
    }

    for (i = 0; i < n; i++)
    {

        if (arr[i] == min)
            frequency++;
    }

    if (frequency % 2 == 0)

        printf("Unlucky");
    else
        printf("Lucky");

    return 0;
}