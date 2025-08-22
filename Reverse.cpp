#include <iostream>
#include <sstream>
using namespace std;

string reverseWords(string s) {
    stringstream ss(s);
    string word;
    string words[100];   // fixed-size array to hold words
    int count = 0;

    while (ss >> word) {   // stores words into array
        words[count++] = word;
    }

    string result = "";
    for (int i = count - 1; i >= 0; i--) {
        result += words[i];
        if (i > 0) result += " ";
    }
    return result;
}

int main() {
    string s = "the sky is blue";
    cout << reverseWords(s);   // Output: blue is sky the
}
