#include <iostream>
using namespace std;

int squareroot(int arr[],int n,int x){
    int low = 0;
    int high = n-1;
    int ans = -1;
    while (low<=high){
        int mid = (low+high)/2;
        int sq = arr[mid]*arr[mid];
        if (sq == x){
            return arr[mid];
        }
        else if(sq>x){
            high = mid-1;
        }
        else{
            low = mid+1;
            ans = arr[mid];
        }
    }
    return ans;
}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 10;
    int answer = squareroot(arr,n,x);
    cout<<answer;
}