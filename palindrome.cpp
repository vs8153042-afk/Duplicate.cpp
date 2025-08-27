#include <iostream>
using namespace std;
string expandAroundCenter(string s, int left, int right) {
    while (left >= 0 && right < s.length() && s[left] == s[right]) {
        left--;
        right++;
    }
    return s.substr(left + 1, right - left - 1);
}
string longestPalindrome(string s) {
    string longest = "";
    for (int i = 0; i < s.length(); i++) {
        string odd = expandAroundCenter(s, i, i);       
        string even = expandAroundCenter(s, i, i + 1);   

        if (odd.length() > longest.length()) longest = odd;
        if (even.length() > longest.length()) longest = even;
    }
    return longest;
}
int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;
    string result = longestPalindrome(input);
    cout << "Longest Palindromic Substring: " << result << endl;
    return 0;
}
