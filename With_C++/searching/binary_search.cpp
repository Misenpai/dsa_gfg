#include <iostream>
using namespace std;


int bSearch(int arr[], int n, int x)
{
	int low = 0, high = n - 1;

	while(low <= high)
	{
		int mid = (low + high) / 2;

		if(arr[mid] == x)
			return mid;

		else if(arr[mid] > x)
			high = mid - 1;

		else
			low = mid + 1;
	}

	return -1;
}

void bubbleSort(int arr[], int n)
{
   for(int i = 0; i < n-1; i++)
   { 
       for (int j = 0; j < n-i-1; j++)
       {
           if (arr[j] > arr[j+1])
           {
              // Swap arr[j] and arr[j+1]
              int temp = arr[j];
              arr[j] = arr[j+1];
              arr[j+1] = temp;
           }
       }
   }
}

int main() {
    
    int arr[] = {10, 20, 30, 40, 50, 60}, n = 6;

    bubbleSort(arr,n);

	int x = 20;
	
	cout<<bSearch(arr, n, x);
	return 0;
}