#include<bits/stdc++.h>
using namespace std;

void fast(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
#endif
    fast();

    char ch;

    // Denotes the counts of alphabets, spaces and digits
    int alpha=0;
    int space=0;
    int digit=0;
    ch=cin.get();
    while(ch!='\n'){

        if(ch>='0' and ch<='9'){
            digit++;
        }
        else if((ch>='a' and ch<='z') or (ch>='A' and ch<='Z')){
            alpha++;
        }
        else if(ch==' ' or ch=='\t'){
            space++;
        }
        ch=cin.get();
    }
    cout<<"Total Alphabets "<<alpha<<endl;
    cout<<"Total Numbers "<<digit<<endl;
    cout<<"Total Spaces "<<space<<endl;


    return 0;
}