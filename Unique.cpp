#include <iostream>
#include <string>
using namespace std;

bool isUnique(string s, int start, int end) {
    bool chars[256] = {false};
    for (int i = start; i <= end; i++) {
        if (chars[s[i]]) return false;
        chars[s[i]] = true;
    }
    return true;
}

int longestSubstring(string s) {
    int n = s.length(), maxLen = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (isUnique(s, i, j)) {
                maxLen = max(maxLen, j - i + 1);
            }
        }
    }
    return maxLen;
}

int main() {
    string s = "abcabcbb";
    cout << "Length of longest substring without repeating characters: " 
         << longestSubstring(s) << endl;
    return 0;
}
