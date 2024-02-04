#include <iostream>
using namespace std;

int merge(int arr1[],int arr2[],int m, int n){
    int arr3[m+n] = {0};
    int i=0,j=0,k=0;
    while (i<m&&j<n){
        if (arr1[i]<arr2[j]){
            arr3[k++] = arr1[i++];
        }
        else{
            arr3[k++]=arr2[j++];
        }
    }
    while (i<m){
        arr3[k++] = arr1[i++];
    }
    while (j<n){
        arr3[k++] = arr2[j++];
    }
    cout<<"Arr 3 is : "<<endl;
    for (int x=0;x<(m+n);x++){
cout<<arr3[x]<<" ";
    }
}

int main(){
    int arr1[] = {1,3,4,6};
    int arr2[] = {2,5,7,8};
    int m = 4;
    int n =4;
    merge(arr1,arr2,m,n);

}