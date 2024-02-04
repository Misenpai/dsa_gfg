#include <iostream>
using namespace std;

int first_occ(int arr[],int n,int x){
    int low = 0;
    int high = n-1;
    while (low<=high){
        int mid=(low+high)/2;
        if (x>arr[mid]){
            low = mid+1;
        }
        else if (x<arr[mid]){
            high = mid-1;
        }
        else{
            if (mid==0||arr[mid]!=arr[mid-1]){
                return mid;
            }
            else{
                high = mid-1;
            }
        }
    }
    return -1;
}

int last_occ(int arr[],int n,int x){
    int low = 0;
    int high = n-1;
    while (low<=high){
        int mid=(low+high)/2;
        if (x<arr[mid]){
            high=mid-1;
        }
        else if(x>arr[mid]){
            low = mid+1;
        }
        else{
            if (mid==0||arr[mid]!=arr[mid+1]){
                return mid;
            }
            else{
                low = mid+1;
            }
        }
    }
    return -1;
}

int count_occ(int arr[],int n,int x){
    int first = first_occ(arr,n,x);
    if (first == -1){
        return 0;
    }
    else{
        return (last_occ(arr,n,x)-first+1);
    }
}

int main(){
    int arr[] = {10,20,20,20,40,40};
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = count_occ(arr,n,20);
    cout<<result;
}