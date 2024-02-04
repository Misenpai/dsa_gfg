// #include <iostream>

// using namespace std;

// void range_sum(int arr[], int n, int q, int queries[][2]) {
//     // Creating prefix sum array
//     int prefix[n];
//     prefix[0] = arr[0];

//     for (int i = 1; i < n; i++) {
//         prefix[i] = arr[i] + prefix[i - 1];
//     }

//     // Handling queries
//     for (int i = 0; i < q; i++) {
//         int l = queries[i][0];
//         int r = queries[i][1];

//         // Calculate and print the sum for the given range
//         if (l == 0) {
//             int ans = prefix[r];
//             cout << ans << endl;
//         } else {
//             int ans = prefix[r] - prefix[l - 1];
//             cout << ans << endl;
//         }
//     }
// }

// int main() {
//    int n;
//     cout << "Enter the size of the array: ";
//     cin >> n;

//     // Input array
//     int arr[n];
//     cout << "Enter the elements of the array: ";
//     for (int i = 0; i < n; ++i) {
//         cin >> arr[i];
//     }

//     // Number of queries
//     int q;
//     cout << "Enter the number of queries: ";
//     cin >> q;

//     // Queries in the form of 2D array (l, r)
//     int queries[q][2];
//     cout << "Enter the queries in the format 'l r': ";
//     for (int i = 0; i < q; ++i) {
//         cin >> queries[i][0] >> queries[i][1];
//     }

//     // Function call
//     range_sum(arr, n, q, queries);

//     return 0;
// }

#include <iostream>
#include <vector>

using namespace std;

void range_sum(vector<int> arr, int n, int q, vector<int> start_indices, vector<int> end_indices) {
    // Creating prefix sum array
    vector<int> prefix(n, 0);
    prefix[0] = arr[0];

    for (int i = 1; i < n; ++i) {
        prefix[i] = arr[i] + prefix[i - 1];
    }

    // Handling queries
    for (int i = 0; i < q; ++i) {
        int l = start_indices[i];
        int r = end_indices[i];

        // Calculate and print the sum for the given range
        if (l == 0) {
            int ans = prefix[r];
            cout << ans << endl;
        } else {
            int ans = prefix[r] - prefix[l - 1];
            cout << ans << endl;
        }
    }
}

int main() {
    // Input array
    vector<int> arr = {4, 5, 3, 2, 5};

    // Number of elements in the array
    int n = arr.size();

    // Number of queries
    int q = 3;

    // Starting indices of queries
    vector<int> start_indices = {0, 2, 1};

    // Ending indices of queries
    vector<int> end_indices = {3, 4, 3};

    // Function call
    range_sum(arr, n, q, start_indices, end_indices);

    return 0;
}

