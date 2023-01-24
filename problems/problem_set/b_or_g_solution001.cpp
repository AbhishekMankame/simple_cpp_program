
#include <iostream>
#include<cstring>
#include<algorithm>
using namespace std;
 
int main(){
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
        freopen("error.txt","w",stderr);
        string str;
        int count=0;
        cin>>str;
        int a=str.size();
        sort(str.begin(),str.end());
        for(int i=0;i<a;i++){
                  if(str[i]==str[i+1])
                    count++;
        }
       int dc=a-count;
        if(dc%2==0)
           cout<<"CHAT WITH HER!";
        else
           cout<<"IGNORE HIM!";
    return 0;
}