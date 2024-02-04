#include <iostream>

using namespace std;
// void bubblesort(int arr[],int n){
//     for (int i = 0;i<n-1;i++){
//         for (int j = 0;j<n-i-1;j++){
//             if (arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }

//     for (int i =0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

//optimesed bubble sort

void bubblesort(int arr[],int n){
    for (int i = 0;i<n-1;i++){
        bool swapped = false;
        for (int  j=0;j<n-i-1;j++){
            if (arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if (swapped == false){
            break;
        }
    }
    for (int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] = {10,8,29,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubblesort(arr,n);
    return 0;
}