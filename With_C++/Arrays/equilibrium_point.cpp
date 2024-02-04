// C++ program to find equilibrium
// index of an array
#include <bits/stdc++.h>
using namespace std;

int equilibrium(int arr[], int n)
{
	int sum = 0; 
	int leftsum = 0; 

	for (int i = 0; i < n; ++i)
		sum += arr[i];

	for (int i = 0; i < n; ++i) {
		sum -= arr[i]; 

		if (leftsum == sum)
			return i;

		leftsum += arr[i];
	}

	return -1;
}

int main()
{
	int arr[] = { 1,3,5,2,2};
	int arr_size = sizeof(arr) / sizeof(arr[0]);
	cout << "First equilibrium index is " << equilibrium(arr, arr_size);
	return 0;
}
