#include <stdlib.h>

void merge(int arr[], int left, int mid, int right, int temp[])
{
    int i = left;
    int j = mid + 1;
    int k = left;

    while (i <= mid && j <= right)
    {
        if (arr[i] <= arr[j])
            temp[k++] = arr[i++];
        else
            temp[k++] = arr[j++];
    }

    while (i <= mid)
        temp[k++] = arr[i++];

    while (j <= right)
        temp[k++] = arr[j++];

    for (int x = left; x <= right; x++)
        arr[x] = temp[x];
}

void mergeSort(int arr[], int left, int right, int temp[])
{
    if (left >= right)
        return;

    int mid = left + (right - left) / 2;

    mergeSort(arr, left, mid, temp);
    mergeSort(arr, mid + 1, right, temp);

    merge(arr, left, mid, right, temp);
}

int* sortArray(int* nums, int numsSize, int* returnSize)
{
    *returnSize = numsSize;

    int* temp = malloc(numsSize * sizeof(int));

    if (temp == NULL)
    {
        *returnSize = 0;
        return NULL;
    }

    mergeSort(nums, 0, numsSize - 1, temp);

    free(temp);

    return nums;
}