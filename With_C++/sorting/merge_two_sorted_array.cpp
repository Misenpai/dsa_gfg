#include <iostream>

using namespace std;

void mergearray(int arr[], int n, int brr[], int m) {
    int i = 0;
    int j = 0;
    int k = 0;
    int temp[n + m];

    // Merge arrays while both have elements remaining
    while (i < n && j < m) {
        if (arr[i] <= brr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = brr[j++];
        }
    }

    // Copy remaining elements from arr[], if any
    while (i < n) {
        temp[k++] = arr[i++];
    }

    // Copy remaining elements from brr[], if any
    while (j < m) {
        temp[k++] = brr[j++];
    }

    // Print the merged array
    for (int idx = 0; idx < k; idx++) {
        cout << temp[idx] << " ";
    }
}

int main() {
    int arr[] = {10, 20, 35};
    int n = sizeof(arr) / sizeof(arr[0]);
    int brr[] = {5, 50, 50};
    int m = sizeof(brr) / sizeof(brr[0]);
    mergearray(arr, n, brr, m);
    return 0;
}