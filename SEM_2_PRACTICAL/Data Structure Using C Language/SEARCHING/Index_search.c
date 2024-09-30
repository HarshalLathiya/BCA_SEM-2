#include <stdio.h>

int index_search(int arr[], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            return i; // Element found, return its index
        }
    }
    return -1; // Element not found
}

int main()
{
    int arr[] = {10, 5, 20, 15, 30};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 15;

    int index = index_search(arr, n, target);

    if (index != -1)
    {
        printf("Element %d found at index %d\n", target, index);
    }
    else
    {
        printf("Element %d not found in the array\n", target);
    }

    return 0;
}