#include <iostream>
using namespace std;

bool twopointer(int arr[],int n,int x){
    int i = 0;
    int j = n-1;
    while (i<j){
            if (arr[i]+arr[j]==x){
        return true;
    }
    else if (arr[i]+arr[j]>x){
        j=j-1;
    }
    else{
        i = i+1;
    }
    }
    return false;
}

int main(){
    int arr[] = {2,4,8,9,11,12,20,30};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 23;
    twopointer(arr,n,x);
    return 0;
}