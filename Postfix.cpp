#include <iostream>
#include <stack>
using namespace std;
int main() {
    string expr[] = {"2","1","+","3","*"}; 
    int n = 5;
    stack<int> st;
    for (int i = 0; i < n; i++) {
        string t = expr[i];
        if (t == "+" || t == "-" || t == "*" || t == "/") {
            int b = st.top(); st.pop();
            int a = st.top(); st.pop();
            if (t == "+") st.push(a+b);
            else if (t == "-") st.push(a-b);
            else if (t == "*") st.push(a*b);
            else st.push(a/b);
        } else st.push(stoi(t));
    }
    cout << st.top();
}
