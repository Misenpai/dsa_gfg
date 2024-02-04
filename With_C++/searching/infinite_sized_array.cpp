#include <iostream>
using namespace std;

int search(int arr[],int x){
    if (arr[0] == x){
        return 0;
    }
    int i = 1;
    while (i<x){
        i = i*i;
    }
    if (arr[i]==x){
        return i;
    }
    else{
        binarysearch(arr,x,i/2+1,i-1);
    }
}