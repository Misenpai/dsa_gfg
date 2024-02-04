#include <iostream>
using namespace std;

// int return_num(int arr[],int n){
//     for (int i = 0;i<n;i++){
//         int left = 0;
//         for (int j = 0;j<i;j++){
//             left = left+arr[j];
//         }
//         int right = 0;
//         for (int j = i+1;j<n;j++){
//             right=right+arr[j];
//         }
//         if (left==right){
//             return i;
//         }
//     }
//     return -1;
// }

int equipoint(int arr[],int n){
    int prefix[n] = {0};
    prefix[0] = arr[0];
    for (int i = 1;i<n;i++){
        prefix[i] = prefix[i-1]+arr[i];
    }
    int total_sum = prefix[n-1];
    cout<<total_sum<<endl;
    int left = 0;
    for (int i =0;i<n;i++){
        total_sum-= arr[i];
        if (left == total_sum){
            return i;
        }
        left = left+arr[i];
    }
    return -1;
}

int main(){
    int arr[] = {-7, 1, 5, 2, -4, 3, 0};
    int n = 7;
    int reslut = equipoint(arr,n);
    cout<<reslut;
}