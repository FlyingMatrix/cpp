// C++ Program to implement QuickSort
#include<iostream>
using namespace std;

void quickSort(int arr[], int i, int j)
{
	if (i >= j)
	{
		return;
	}

	int pivot = arr[i];
	int low = i;
	int high = j;

	while (i < j)
	{
		while (i < j && arr[j] >= pivot)
		{
			j--;
		}
		swap(arr[i], arr[j]);
		while (i < j && arr[i] <= pivot)
		{
			i++;
		}
		swap(arr[i], arr[j]);
	}

	pivot = arr[i];
	quickSort(arr, low, i - 1);
	quickSort(arr, i + 1, high);

	return;
}

void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main()
{
	int arr[] = { 2, 5, 6, 9, 1, 3, 4 };
	int n = sizeof(arr) / sizeof(arr[0]);

	cout << "Array: ";
	printArray(arr, n);

	quickSort(arr, 0, n - 1);

	cout << "Sorted array: ";
	printArray(arr, n);
	return 0;
}