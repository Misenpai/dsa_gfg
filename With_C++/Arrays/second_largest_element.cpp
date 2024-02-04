#include <iostream>
using namespace std;

int second_largest(int arr[],int n){
    int first = arr[0];
    int second = -1;
    for (int i = 1;i<n;i++){
        if (arr[i]>first){
            second = first;
            first = arr[i];
        }
        else if (arr[i]<first){
            if (second == -1 || second<arr[i]){
                second = arr[i];
            }
        }
    }
    return second;
}

int main(){
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = second_largest(arr,n);
    cout<<result;
}


// void printLeaders(int arr[], int size)
// {
// 	int max_from_right = arr[size-1];

// 	cout << max_from_right << " ";
	
// 	for (int i = size-2; i >= 0; i--)
// 	{
// 		if (max_from_right < arr[i])
// 		{		
// 			max_from_right = arr[i];
// 			cout << max_from_right << " ";
// 		}
// 	}
// }


// int main()
// {
// 	int arr[] = {16, 17, 4, 3, 5, 2};
// 	int n = sizeof(arr)/sizeof(arr[0]);
// 	printLeaders(arr, n);
// 	return 0;
// }