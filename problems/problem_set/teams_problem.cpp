#include<bits/stdc++.h>
using namespace std;

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
    int t;
    cin>>t;
    int count=0;
    int a,b,c;
    while(t--){
        cin>>a>>b>>c;
        if(a==1&&b==1&&c==1){
            count++;
        }
        else if((a==1&&b==1)||(b==1&&c==1)||(c==1&&a==1))
        {
            count++;
        }
    }
    cout<<count<<endl;
}