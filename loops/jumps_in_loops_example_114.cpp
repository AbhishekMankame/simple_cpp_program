//Whether the given number by the user lies between the range given by user is prime or not

#include<iostream>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	
	for(int num=a;num<=b;num++){
		int i;
		for(i=2;i<num;i++){
			if(num%i==0){
				break;
			}
		}
		if(i==num){
			cout<<num<<endl;
		}
	}
}
