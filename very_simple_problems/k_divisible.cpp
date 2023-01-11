#include <iostream>
using namespace std;

int main() {
	// your code goes here
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    for(int i=1;i<100;i++){
	        if((a%i!=0) && (b%i!=0) && (c%i!=0)){
	            cout<<i<<endl;
	            break;
	        }
	    }
	}
	return 0;
}
