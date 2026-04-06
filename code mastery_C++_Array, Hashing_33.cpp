#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    // Input array
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Sort the array
    sort(arr.begin(), arr.end());

    vector<int> result;

    // Find duplicates
    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1]) {
            // Avoid adding duplicates multiple times
            if (result.empty() || result.back() != arr[i]) {
                result.push_back(arr[i]);
            }
        }
    }

    // Output
    cout << "[";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i];
        if (i != result.size() - 1) cout << ", ";
    }
    cout << "]";

    return 0;
}