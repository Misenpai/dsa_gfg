#include <iostream>
#include <limits.h>

using namespace std;

int findMedian(int arr[], int n, int brr[], int m)
    {
        // code here
        int begin1 = 0;
        int end1= n-1;
        while(begin1<=end1){
            int i1 = (begin1+end1)/2;
            int i2 = (n+m+1)/2-i1;
    int min1 = (i1==n-1)?INT_MAX:arr[i1];
        int max1 = (i1==0)?INT_MIN:arr[i1-1];
        int min2 = (i2==m-1)?INT_MAX:brr[i2];
        int max2 = (i2==0)?INT_MIN:brr[i2-1];
            if (max1<=min2&&max2<=min1){
                if ((n+m)%2==0){
                    return ((int) (max(max1,max2)+min(min1,min2))/2);
                }
                else{
                    return ((int) (max(max1,max2)));
                }
            }
            else if(max1>min2){
                end1 = i1-1;
            }
            else{
                begin1 = i1+1;
            }
        }
        return -1;
    }


int main(){
    int arr[] = {1,2,3,4,5};
    int brr[] = {3,4,5,6,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int m = sizeof(brr)/sizeof(brr[0]);
    int answer = findMedian(arr,n,brr,m);
    cout<<answer;
    return 0;
}