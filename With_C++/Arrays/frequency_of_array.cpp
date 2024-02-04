#include <iostream>
#include <vector>
using namespace std;

void printfreq(vector<int>& arr, int N){
    int freq = 1;
    for (int i = 1;i<N;i++){
        if (arr[i-1]==arr[i]){
            freq++;
        }
        else{
            cout<<"Frequency of "<<arr[i-1]
                <<" is : "<<freq<<endl;
            freq = 1;
        }
    }
    cout<<"Frequency of "<<arr[N-1]<<" is :"<<freq;
}

int main(){
    vector<int> arr = {1, 1, 1, 2, 3, 3, 5, 5, 8, 8, 8, 9, 9, 10 };
    int n = arr.size();
    printfreq(arr,n);
    return 0;
}