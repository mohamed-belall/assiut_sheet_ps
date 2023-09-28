
/*
 *  sheet (c)   => Z - Binary Search
 */



#include <stdio.h>
#include <stdlib.h>

int binarySearch(int arr[], int arr_size, int number)
{
    int left = 0, right = arr_size - 1, mid = 0;
    while (left <= right)
    {
        mid = left + (right - left) / 2;
        if (number == arr[mid])
        {
            return mid;
        }
        else if (number < arr[mid])
        {
            right = mid - 1;
        }
        else if (number > arr[mid])
        {
            left = mid + 1;
        }
    }
    return -1;
}

void quickSort(int arr[], int left, int right)
{
    if (left < right)
    {
        int pivotIndex = partition(arr, left, right);
        quickSort(arr, left, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, right);
    }
}

int partition(int arr[], int left, int right)
{
    int pivot = arr[right];
    int i = (left - 1);

    for (int j = left; j <= right - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    int temp = arr[i + 1];
    arr[i + 1] = arr[right];
    arr[right] = temp;

    return (i + 1);
}

int main()
{
    int n, q;

    scanf("%d %d", &n, &q);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    quickSort(arr, 0, n - 1);

    int x;
    while (q--)
    {
        scanf("%d", &x);

        if (binarySearch(arr, n, x) != -1)
            printf("found\n");
        else
            printf("not found\n");
    }

    return 0;
}
