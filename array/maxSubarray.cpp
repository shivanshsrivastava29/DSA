#include <iostream>
#include <climits>

using namespace std;

int MaxsubarraySum(int arr[], int n) {
    int maxSum = INT_MIN;

    for (int st = 0; st < n; st++) {
        int currentsum = 0; // Initialize currentsum here
        for (int end = st; end < n; end++) {
            currentsum += arr[end]; // accumulate sum
            maxSum = max(currentsum, maxSum); // update max
        }
    }

    return maxSum;
}

int main() {
    int arr[7] = {3, -4, 5, 4, -1, 7, 8};
    int n = 7;

    int result = MaxsubarraySum(arr, n);
    cout << "Maximum subarray sum is: " << result << endl;

    return 0;
}
