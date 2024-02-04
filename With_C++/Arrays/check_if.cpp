#include <iostream>
using namespace std;

bool check_if(int arr[],int n){  
    for (int i = 0;i<n;i++){
        if (arr[i]<arr[i+1]){
            return true;
        }
        else{
            return false;
        }
    }
}

int main(){
    int arr[] = {7, 2, 30, 10};
    int n = sizeof(arr)/sizeof(arr[0]);
    bool result = check_if(arr,n);
    if (result==1){
        cout<<"True";
    }
    else if (result == 0){
        cout<<"False";
    }
}