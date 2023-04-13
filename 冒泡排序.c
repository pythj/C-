#include <stdio.h>

void sort_mp(int arr[], int sz)
{

    for (int i = 0; i < sz - 1; i++)
    {
        for (int j = 0; j < sz - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {

                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int arr[] = {0, 8, 9, 5, 6, 4, 3, 2, 1};
    int sz = sizeof(arr) / sizeof(arr[0]);
    sort_mp(arr, sz);
    for (int i = 0; i < sz ; i++)
    {
        printf("%d", arr[i]);
    }
    return 0;
}
