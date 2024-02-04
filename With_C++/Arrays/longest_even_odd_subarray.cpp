#include <iostream>
using namespace std;

// int longestEvenOddSubarray(int a[], int n)
// {
// 	int ans = 1;
// 	for (int i = 0; i < n; i++) {
// 		int cnt = 1;
// 		for (int j = i + 1; j < n; j++) {
// 			if ((a[j - 1] % 2 == 0 && a[j] % 2 != 0)
// 				|| (a[j - 1] % 2 != 0 && a[j] % 2 == 0))
// 				cnt++;
// 			else
// 				break;
// 		}
// 		ans = max(ans, cnt);
// 	}
// 	if (ans == 1)
// 		return 0;
// 	return ans;
// }


int longestEvenOddSubarray(int arr[],int n){
    if (n==0){
        return 0;
    }
    int maxlen = 0;
    int iterlen = 1;
    for (int i = 1;i<n;i++){
        if (arr[i]%2 != arr[i-1]%2){
            iterlen++;
        }
        else{
            maxlen = max(maxlen,iterlen);
        iterlen = 1;
        }
    }
    if (maxlen == 1){
        return 0;
    }
    return maxlen;
}
int main()
{
	int a[] = { 1, 2, 3, 4, 5, 7, 8 };

	int n = sizeof(a) / sizeof(a[0]);

	cout << longestEvenOddSubarray(a, n);
	return 0;
}