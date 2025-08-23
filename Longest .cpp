#include <iostream>
#include <vector>
#include <string>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    if (strs.empty()) return "";

    string prefix = strs[0]; 

    for (int i = 1; i < strs.size(); i++) {
        // reduce prefix until it matches the start of strs[i]
        while (strs[i].find(prefix) != 0) {
            prefix = prefix.substr(0, prefix.size() - 1);
            if (prefix.empty()) return "";
        }
    }
    return prefix;
}

int main() {
    string arr[] = {"flower", "flow", "flight"};
    vector<string> strs(arr, arr + 3);

    cout << longestCommonPrefix(strs) << endl;
    return 0;
}
