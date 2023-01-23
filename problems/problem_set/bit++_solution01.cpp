#include <iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<cstring>
using namespace std;
char str[100];
int main()
{
    int i,j,t;
    int n,m,num,max=0;
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
    scanf("%d",&n);
    j=0;
    for(i=0;i<n;++i)
    {
        scanf("%s",str);
        int l=strlen(str);
        for(t=0;t<l;++t)
        {
            if(str[t]=='+'&&str[t+1]=='+')j++;
            if(str[t]=='-'&&str[t+1]=='-')j--;
        }
    }
    printf("%d",j);
 
 
 
   return 0;
}