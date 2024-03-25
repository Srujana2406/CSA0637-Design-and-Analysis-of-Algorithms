#include <stdio.h>
void findMinMax(int arr[], int n) 
{
    int min_val = arr[0];
    int max_val = arr[0];

    for (int i = 1; i < n; i++) 
	{
        if (arr[i] < min_val) 
		{
            min_val = arr[i];
        }
        if (arr[i] > max_val) 
		{
            max_val = arr[i];
        }
    }
    printf("Minimum value: %d\n", min_val);
    printf("Maximum value: %d\n", max_val);
}
int main() 
{
    int arr[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    findMinMax(arr, n);
    return 0;
}

