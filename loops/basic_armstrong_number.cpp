//armstrong number - sum of cube of each digit equals to the given number

#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int sum=0;
	int originaln=n;
	while(n>0){
		int lastdigit = n%10;
		sum+=pow(lastdigit,3);
		n=n/10;
	}
	
	
	if(sum==originaln){
		cout<<"Armstrong number"<<endl;
	}
	else{
		cout<<"Not armstrong number"<<endl;
	}
}
