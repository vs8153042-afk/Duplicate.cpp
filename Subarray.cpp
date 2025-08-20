#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, -3, 3, -1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Subarrays with zero sum are:" << endl;

    // Check all subarrays
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum += arr[j];
            if (sum == 0) {
                cout << "(" << i << ", " << j << ")" << endl;
            }
        }
    }
    return 0;
}
