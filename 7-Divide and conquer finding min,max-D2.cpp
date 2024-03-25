#include <stdio.h>
struct Pair 
{
    int min;
    int max;
};
struct Pair findMinMax(int arr[], int low, int high) 
{
    struct Pair result, left, right, merged;
    if (low == high) 
	{
        result.min = arr[low];
        result.max = arr[low];
        return result;
    }
    if (high == low + 1) 
	{
        if (arr[low] < arr[high]) 
		{
            result.min = arr[low];
            result.max = arr[high];
        } 
		else 
		{
            result.min = arr[high];
            result.max = arr[low];
        }
        return result;
    }
    int mid = (low + high) / 2;
    left = findMinMax(arr, low, mid);
    right = findMinMax(arr, mid + 1, high);

    merged.min = (left.min < right.min) ? left.min : right.min;
    merged.max = (left.max > right.max) ? left.max : right.max;

    return merged;
}

int main() 
{
    int arr[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    struct Pair result = findMinMax(arr, 0, n - 1);

    printf("Minimum value: %d\n", result.min);
    printf("Maximum value: %d\n", result.max);

    return 0;
}

