#include <iostream>

using namespace std;

void selectionsort(int arr[],int n){
    for (int i = 0;i<n-1;i++){
        int minimum_ind = i;
        for (int j = i+1;j<n;j++){
            if (arr[j]<arr[minimum_ind]){
                minimum_ind = j;
            }           
        }
        swap(arr[minimum_ind],arr[i]);
    }

    for (int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] = {90,80,90,25};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionsort(arr,n);
    return 0;
}