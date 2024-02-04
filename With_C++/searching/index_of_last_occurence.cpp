#include <iostream>
using namespace std;

int last_occurence(int arr[],int n,int x){
    int low = 0;
    int high = n-1;
    while (low<=high){
        int mid = (low+high)/2;
        if (x>arr[mid]){
            low = mid+1;
        }
        else if (x<arr[mid]){
            high = mid -1;
        }
        else {
            if (mid == n-1 || arr[mid+1]!=arr[mid]){
                return mid;
            }
            else {
                low = mid+1;
            }
        }

    }
    return -1;
};
int main(){
    int arr[] = {5, 10, 10, 10, 10, 20, 20};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 10;
    int result = last_occurence(arr,n,x);
    cout<<result<<" ";
    return 0;
}