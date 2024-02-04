#include <iostream>
using namespace std;


void stock(int arr[], int n) {
    int final_sold = 0;
    int initial = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
            final_sold += arr[i - 1] - initial;
            initial = arr[i];
        }
    }
    final_sold += arr[n - 1] - initial;

    cout << "Total sold is: " << final_sold;
}

void stock(int price[],int n){
    int profit = 0;

	for(int i = 1; i < n; i++)
	{
		if(price[i] > price[i - 1])
			profit += price[i] - price[i -1];
	}

	cout<<profit;
}

int main(){
    int arr[] = {4, 2, 2, 2, 4};
    int  n = sizeof(arr)/sizeof(arr[0]);
    stock(arr,n);
    return 0;
}