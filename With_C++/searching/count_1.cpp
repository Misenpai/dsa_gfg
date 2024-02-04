#include <iostream>
using namespace std;

int first_occ(int arr[],int n,int x){
    int low = 0;
    int high = n-1;
    while (low<=high){
        int mid = (low+high)/2;
        if (x<arr[mid]){
            high = mid-1;
        }
        else if(x>arr[mid]){
            low = mid+1;
        }
        else{
            if (mid == 0||arr[mid]!=arr[mid-1]){
                return mid;
            }
            else{
                high = mid-1;
            }
        }
        
    }
    return -1;
}

int count_of_one(int arr[],int n){
    
    int res = first_occ(arr,n,1);
    int result = n-res;
    return result;
}

int main(){
    int arr[] = {0,0,1,1,1,1,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<n<<endl;
    int result = count_of_one(arr,n);
    cout<<result;
    return 0;
}