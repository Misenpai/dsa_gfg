#include <iostream>
#include <climits>

int largestSum(int arr[], int n) {
    int max_so_far = INT_MIN;
    int max_ending_here = 0;

    for (int i = 0; i < n; i++) {
        max_ending_here += arr[i];

        if (max_so_far < max_ending_here) {
            max_so_far = max_ending_here;
        }

        if (max_ending_here < 0) {
            max_ending_here = 0;
        }
    }

    return max_so_far;
}

int main() {
    int arr[] = {-3, 4, -1, -2, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = largestSum(arr, n);

    std::cout << "Output: " << result << std::endl;

    return 0;
}
