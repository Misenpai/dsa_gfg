#include <iostream>
#include <algorithm>

using namespace std;

void sorting(int arr[],int n){
    sort(arr,arr+n);
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    sort(arr,arr+n,greater<int>());
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[] = {10,20,5,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    sorting(arr,n);
    return 0;
}