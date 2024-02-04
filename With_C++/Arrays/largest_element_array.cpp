#include <iostream>
using namespace std;


// simple
int largestnum(int arr[],int n){
    int num = arr[0];
    for (int i = 1;i<n;i++){
        if (num<arr[i]){
            num = arr[i];
        }
    }
    return num;
}



int main(){
    int arr[]={5, 8, 20, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = largestnum(arr,n);
    cout<<result;
}