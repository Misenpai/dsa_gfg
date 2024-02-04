#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void getsort(vector<int> a){
    sort(a.begin(),a.end());
    for (int i = 0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
}

int main(){
    vector<int> a = {10,20,5,7};
    getsort(a);
    return 0;
}