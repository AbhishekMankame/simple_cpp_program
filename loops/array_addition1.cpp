#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	freopen("error.txt","w", stderr);
	int n;
	cin>>n;
	int target;
	cin>>target;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int j=0;j<n;j++){
		for(int k=0;k<n;k++){
			if((a[j]+a[k])==target){
				cout<<"["<<a[j]<<","<<a[k]<<"]"<<endl;
			}
			else return -1;
		}
	}
	
	return 0;
}
