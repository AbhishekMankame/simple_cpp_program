//Incrementer operator example demonstration

#include<iostream>
using namespace std;
int main(){
	int i=1;
	//  1    //due to post increment of previous i, the initial value will be 2 and because of pre increment it will become 3
	//i = i++ + ++i;
	
	//cout<<i<<endl;
	int j=2;
	int k;
	//1  2   1     2     3        4
	k=i +j + i++ + j++ + ++i + ++j;
	cout<<i<<" "<<j<<" "<<k<<endl;
	return 0;
}
