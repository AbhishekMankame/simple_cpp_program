#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        char letter='A';
        // letters n-i+1 letters in inc values
        for(int cnt=1; cnt<=n-i+1;cnt++){
            cout<< letter;
            letter++; // letter=letter+1
        }
        // letters n-i+1 letters in dec values
        letter=letter-1;  //reset the value to prev printed layer
        for(int cnt=1;cnt<=n-i+1;cnt++){
            cout<<letter;
            letter--;
        }
        cout<<endl;
    }


    return 0;
}