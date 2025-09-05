#include <iostream>
using namespace std;

int firstElementToRepeatKTimes(int arr[], int n, int k) {
    for(int i = 0; i < n; i++) {
        int count = 0;
        for(int j = 0; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }
        if(count == k) {
            return arr[i];  
        }
    }
    return -1; 
}

int main() {
    int arr[] = {3, 1, 4, 4, 5, 2, 6, 1, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;

    cout << firstElementToRepeatKTimes(arr, n, k);
    return 0;
}
