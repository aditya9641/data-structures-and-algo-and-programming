#include<bits/stdc++.h>
using namespace std;

int main() {
    string s = "Striver";
    int len = s.size();
    s[len-1] = 'z'; //not "z"
    cout << s[len-1]; //last index
    // cout << s;
    return 0;

}