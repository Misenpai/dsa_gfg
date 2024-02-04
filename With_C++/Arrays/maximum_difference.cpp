#include <iostream>
using namespace std;

// int maximum_difference(int arr[],int n){

//     int max = arr[1]-arr[0];
//     for (int i=0;i<n;i++){
//         for (int j = i+1;j<n;j++){
//             if ((arr[j]-arr[i])>max){
//                 max = arr[j]-arr[i];
//             }
//         }
//     }
//     return max;
// }

int maximum_difference(int arr[], int arr_size)
{
	// Maximum difference found so far
	int max_diff = arr[1] - arr[0];
	
	// Minimum number visited so far
	int min_element = arr[0];
	for(int i = 1; i < arr_size; i++)
	{	
	if (arr[i] - min_element > max_diff)							
	max_diff = arr[i] - min_element;
		
	if (arr[i] < min_element)
	min_element = arr[i];					
	}
	
	return max_diff;
}

int main(){
    int arr[] = {1, 2, 90, 10, 110};
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = maximum_difference(arr,n);
    cout<<result;
}