#include <iostream>

using namespace std;
void intersection(int arr[],int n,int brr[],int m){
    int i = 0;
    int j = 0;
    while (i<n&&j<m){
        if (i>0 and arr[i]==arr[i+1]){
            i++;
            continue;
        }
        if (arr[i]<brr[j]){
            i++;
        }
        else if(arr[i]>brr[j]){
            j++;
        }
        else{
            cout<<arr[i];
            i++;
            j++;
        }
    }
}

int main(){
    int arr[] = {10,20,20,40,60};
    int brr[] = {2,20,20,20};
    int n = sizeof(arr)/sizeof(arr[0]);
    int m = sizeof(brr)/sizeof(brr[0]);
    intersection(arr,n,brr,m);
    return 0;
}