#include<bits/stdc++.h>
using namespace std;

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);

    int m,n;
    cin>>m>>n;
    int count=1;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++){
            cout<<count<<" ";
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }

    return  0;
}