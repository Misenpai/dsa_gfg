#include <iostream>
#include <climits>
using namespace std;

// void maximum_subarray(int arr[], int n) {
//     int maxSum = INT_MIN;
//     int start ;
//     int end ;

//     for (int i = 0; i < n; ++i) {
//         int currentSum = 0;
//         for (int j = i; j < n; ++j) {
//             currentSum += arr[j];
//             if (currentSum > maxSum) {
//                 maxSum = currentSum;
//                 start = i;
//                 end = j;
//             }
//         }
//     }

//     std::cout << "Output: [";
//     for (int i = start; i <= end; ++i) {
//         std::cout << arr[i];
//         if (i < end) {
//             std::cout << ", ";
//         }
//     }
//     std::cout << "]\n";
// }

void maximum_subarray(int arr[],int n){
    int endindex = 0;
    int currentMax = arr[0];
    int globalMax = arr[0];

    for (int i = 1;i<n;i++){
        currentMax = max(arr[i],currentMax+arr[i]);
        if (currentMax>globalMax){
            globalMax = currentMax;
            endindex = i;
        }
    }

    int startindex = endindex;
    while (startindex>=0){
        globalMax -= arr[startindex];
        if (globalMax == 0){
            break;
        }
        startindex--;
    }

    for(int i = startindex;i<=endindex;i++){
        cout<<arr[i]<<" ";
    }

    
}

int main(){
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(arr)/sizeof(arr[0]);
    maximum_subarray(arr,n);
    return 0;
}