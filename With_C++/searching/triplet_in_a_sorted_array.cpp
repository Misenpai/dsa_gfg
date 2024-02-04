#include <iostream>
using namespace std;


bool double_sum(int arr[],int n, int i,int x){
    int low = i+1;
    int high = n-1;
    while (low<high){
        if (arr[low]+arr[high]==x-arr[i]){
            return true;
        }
        else if (arr[low]+arr[high]>x-arr[i]){
            high = high -1;
        }
        else{
            low = low+1;
        }
    }
    return false;
}

bool triplet(int arr[],int n, int x){
    for (int i = 0;i<n-2;i++){
        bool temp = double_sum(arr,n,i,x);
        if (temp == true){
            return true;
        }
    }
    return false;
}



int main(){
    int arr[] = {2,3,4,8,9,20,40};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 32;
    if (triplet(arr,n,x) == true){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    return 0;
}