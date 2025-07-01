#include <iostream>
#include <climits>
using namespace std;

int kadane(int arr[], int n) {
    int maxSum = INT_MIN; // works even if all elements are negative
    int currentSum = 0;

    for (int i = 0; i < n; i++) {
        currentSum += arr[i];
        if (currentSum > maxSum)
            maxSum = currentSum;

        if (currentSum < 0)
            currentSum = 0;
    }

    return maxSum;
}

int main() {
    int arr[] = {-2, -3, -1, -5}; // all negative test
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Maximum Subarray Sum = " << kadane(arr, n) << endl;
    return 0;
}
