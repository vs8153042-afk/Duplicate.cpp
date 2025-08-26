#include <iostream>
using namespace std;

bool isValid(string s) {
    char stack[1000];   // array stack
    int top = -1;       // stack pointer

    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        if (c == '(' || c == '{' || c == '[') {
            stack[++top] = c;   // push opening bracket
        } 
        else {
            if (top == -1) return false;   // no matching opening
            char last = stack[top--];      // pop
            if ((c == ')' && last != '(') ||
                (c == '}' && last != '{') ||
                (c == ']' && last != '[')) {
                return false;   // wrong match
            }
        }
    }
    return (top == -1);   // stack should be empty at end
}

int main() {
    string s;
    cout << "Enter string: ";
    cin >> s;

    if (isValid(s))
        cout << "true\n";
    else
        cout << "false\n";

    return 0;
}
