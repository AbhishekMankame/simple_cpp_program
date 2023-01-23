#include<iostream>
using namespace std;
int main()
{   
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
    int ans = 0, i, n;
    string s;
    cin >> n;
    for(i = 0; i < n; i++)
    {
        cin >> s;
        if(s[0] == '+' || s[1] == '+' || s[2] == '+')
            ans++;
        else
            ans--;
    }
    cout << ans;
    return 0;
}