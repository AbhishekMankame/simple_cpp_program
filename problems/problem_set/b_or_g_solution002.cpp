#include <bits/stdc++.h>
using namespace std;
int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
    string str;
    cin >> str;
    unordered_set<char> M(str.begin(), str.end());
    cout << (M.size() % 2 ? "IGNORE HIM!" : "CHAT WITH HER!");
}