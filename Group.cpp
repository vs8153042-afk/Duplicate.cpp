#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    string arr[] = {"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<string> strs(arr, arr + 6); 
    map<string, vector<string> > mp;
    for (int i = 0; i < strs.size(); i++) {
        string s = strs[i];
        string key = s;
        sort(key.begin(), key.end()); 
        mp[key].push_back(s);
    }
    for (map<string, vector<string> >::iterator it = mp.begin(); it != mp.end(); ++it) {
        cout << "[ ";
        for (int j = 0; j < it->second.size(); j++) {
            cout << it->second[j] << " ";
        }
        cout << "]\n";
    }

    return 0;
}
