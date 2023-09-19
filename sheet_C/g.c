/*
 *  sheet (c)   =>    G. Palindrome Array
 */

#include <stdio.h>

int main()
{
    int n, i, flag = 0;

    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i <= n / 2; i++)
    {
        if (arr[i] != arr[n - i - 1])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        printf("YES");
    else
        printf("NO");

    return 0;
}

/*
#include <stdio.h>

int main()
{
    int n, i;
    long long number1 = 0, number2 = 0;

    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        number1 = (number1 * 10) + arr[i];
    }
    for (i = i - 1; i >= 0; i--)
    {
        number2 = (number2 * 10) + arr[i];
    }
    if (number1 == number2)
        printf("YES");
    else
        printf("NO");

    return 0;
}

*/