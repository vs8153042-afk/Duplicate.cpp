#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr;
    arr.push_back(16);
    arr.push_back(17);
    arr.push_back(4);
    arr.push_back(3);
    arr.push_back(5);
    arr.push_back(2);

    cout << "Leaders: ";
    for (int i = 0; i < arr.size(); i++) {
        bool leader = true;
        for (int j = i + 1; j < arr.size(); j++) {
            if (arr[i] <= arr[j]) {
                leader = false;
                break;
            }
        }
        if (leader) {
            cout << arr[i] << " ";
        }
    }
    return 0;
}
