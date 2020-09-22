#include <iostream>
void transform(int arr1[], int n);
// void printarray(int arr[], int size);
using namespace std;
int main()
{
	int arr1[100], i, j, n;
	cout << "Enter the size of the array:";
	cin >> n;
	cout << "Enter the list of the array:";
	for (i = 0; i < n; i++)
	{
		cin >> arr1[i];
	}
	transform(arr1, n);
	// cout << "sortng array are:" << endl;
	// printarray(arr1, n);
}
void transform(int arr1[], int n)
{
	int arr2[100], i, j;
	int rank = 1;
	for (int j = 0; j < n; j++)
	{
		arr2[j] = arr1[j];
		// cout << "value are3 :" << arr2[j] << endl;
	}
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - i - 1; j++)
		{
			if (arr1[j] > arr1[j + 1])
			{
				int temp;
				temp = arr1[j];
				arr1[j] = arr1[j + 1];
				arr1[j + 1] = temp;
				// swap(arr1[j],arr1[j+1])
			}
		}
	}
	for (int i=0; i < n; i++)
	{
		// cout << "display item inside array arr1:" << arr1[i] << endl;
		for (int j = 0; j < n; j++)
		{
			// cout<<"display item of arr2:"<<arr2[j]<<endl;
			if (arr1[i] == arr2[j])
			{
				// cout << "print:" << arr2[j] << endl;
				arr2[j] = rank;
				// cout << "print the rank:" << arr2[j] << endl;
		        rank++;
			}
		}
	}
	for (i = 0; i < n; i++)
	{
		cout << arr1[i] << " ";
	}
	cout << endl;
	cout << "ranks wise order:" << endl;
	for (i = 0; i < n; i++)
	{
		cout << arr2[i] << " ";
	}
	cout << endl;

	// cout << "sortng array are:" << endl;
	// printarray(arr1, n);
}
// void printarray(int arr1[], int size)
// {
// 	int arr3[100];
// 	int i;
// 	for (i = 0; i < size; i++)
// 	{
// 		cout << arr1[i] << " ";
// 	}
// 	cout << endl;
// 	for (int j = 0; j < size; j++)
// 	{
// 		arr3[j] = arr1[j];
// 		cout << "value are :" << arr3[j] << endl;
// 	}
// 	for (int k = 0; k < size; k++)
// 	{
// 		cout << "data :" << arr3[k] << " ";
// 	}
// 	cout << endl;
// 	// for (int i; i < size; size++)
// 	// {
// 	// 	for (j = 0; j < n - 1; j++)
// 	// 	{
// 	// 		if
// 	// 	}
// 	// }
// }
33+