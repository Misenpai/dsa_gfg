#include <iostream>
using namespace std;

int zero(int arr[],int n){
    int res = 0;
    for (int i=0;i<n;i++){
        if (arr[i]!=0){
            arr[res] = arr[i];
            res++;
        }
    }
    for (int i = res;i<n;i++){
        arr[i]=0;
    }
}

void printArray(int arr[], int n)
{
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
}

// Driver program to test above
int main()
{
	int arr[] = { 0, 1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0, 9 };
	int n = sizeof(arr) / sizeof(arr[0]);

	cout << "Original array: ";
	printArray(arr, n);

	zero(arr, n);

	cout << "\nModified array: ";
	printArray(arr, n);
	return 0;
}