#include <iostream>

using namespace std;

void insertion_sort(int arr[],int n){
    for (int i = 1;i<n;i++){
        int temp = arr[i];
        int j = i-1;
        while (j>=0&&arr[j]>temp){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
    cout<<endl;
    cout<<"Printing: "<<endl;
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] = {20,5,40,60,10,30};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertion_sort(arr,n);
    return 0;
}