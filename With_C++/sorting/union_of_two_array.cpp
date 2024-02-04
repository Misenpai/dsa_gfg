#include <iostream>
#include <vector>

using namespace std;
void union_array(int arr[],int brr[],int n,int m){
    int i = 0, j = 0;
    vector<int> answer;

    while (i < n && j < m) {
        if (i>0&&arr[i]==arr[i-1]){
            i++;
            continue;
        }
        if (j>0&&brr[j]==brr[j-1]){
            j++;
            continue;
        }
        if (arr[i]>brr[j]){
            answer.push_back(brr[j]);
            j++;
        }
        else if(arr[i]<brr[j]){
            answer.push_back(arr[i]);
            i++;
        }
        else{
            answer.push_back(arr[i]);
            i++;
            j++;
        }
    }
    

    // Add remaining elements of arr
    while (i < n) {
        if (i>0 &&arr[i]!=arr[i-1]){
            answer.push_back(arr[i]);
            i++;
        }
    }

    // Add remaining elements of brr
    while (j < m) {
        if (j>0&&brr[i]!=brr[j-1]){
            answer.push_back(brr[j]);
            j++;
        }
    }

    for (int i = 0; i < answer.size(); i++) {
        cout << answer[i] << " ";
    }
    cout << endl;
    }


int main(){
    int arr[] = {2,10,20,20};
    int brr[] = {3,20,40,40,50,50};
    int n = sizeof(arr)/sizeof(arr[0]);
    int m = sizeof(brr)/sizeof(brr[0]);
    union_array(arr,brr,n,m);
    return 0;
}