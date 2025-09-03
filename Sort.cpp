#include <iostream>
#include <stack>
using namespace std;

void insertSorted(stack<int> &s, int x) {
    if (s.empty() || s.top() <= x) { s.push(x); return; }
    int t = s.top(); s.pop();
    insertSorted(s, x);
    s.push(t);
}

void sortStack(stack<int> &s) {
    if (s.empty()) return;
    int t = s.top(); s.pop();
    sortStack(s);
    insertSorted(s, t);
}

void printBottomToTop(stack<int> &s) {
    if (s.empty()) return;
    int t = s.top(); s.pop();
    printBottomToTop(s);
    cout << t << " ";
}

int main() {
    stack<int> s;
    s.push(3); s.push(1); s.push(4); s.push(2);
    sortStack(s);
    printBottomToTop(s);  // prints 1 2 3 4
}
