#include <iostream>

using namespace std;

void insertion_sort(int arr[], int n);

void printArray(int arr[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

int main()
{
	int arr[] = { 24, 13, 9, 64, 7, 23, 34, 47 };
	int n = sizeof(arr) / sizeof(arr[0]);
	insertion_sort(arr, n);
	printArray(arr, n);

	return 1;
}

//test
void insertion_sort(int arr[], int n)
{
	int i = 0;
	int j = 0;
	int key = 0;

	for (i = 1; i < n; i++)
	{
		key = arr[i];
		j = i - 1;

		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
		printArray(arr, n);
	}

}