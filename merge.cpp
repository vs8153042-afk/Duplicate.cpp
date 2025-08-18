#include <bits/stdc++.h>
using namespace std;

void mergeArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
    int i = m - 1, j = 0;
    while (i >= 0 && j < n && arr1[i] > arr2[j]) {
        swap(arr1[i], arr2[j]);
        i--; j++;
    }
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());
}

int main() {
    int a1[] = {1, 3, 5, 7};
    int a2[] = {2, 4, 6, 8};

    vector<int> arr1(a1, a1 + 4);  
    vector<int> arr2(a2, a2 + 4);

    int m = arr1.size();
    int n = arr2.size();

    mergeArrays(arr1, arr2, m, n);

    cout << "arr1 = ";
    for (int i = 0; i < arr1.size(); i++) 
    cout << arr1[i] << " ";
    cout << endl;

    cout << "arr2 = ";
    for (int i = 0; i < arr2.size(); i++) 
    cout << arr1[i] << " ";

    cout << endl;

    return 0;
}
