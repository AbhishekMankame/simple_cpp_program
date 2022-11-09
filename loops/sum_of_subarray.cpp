// Subarray :- Continuous part of the array
// Let us consider an array [1,2,0,7,2,0,2]
/* Here the subarrays can be [1],[0,2],[2,0,7,2]
Number of subarrays of an array with n elements = nC2+n = n*(n-1)/2*/

/* Subsequence :-
A subsequence is a sequence that can be derived an array by selecting zero or more elements, without changing the order of the remainimg elements.
Number of subsequences of an array with n elements = 2^n
/* Quote - Every Subarray is a Subsequence but every Subsequence is not a Subarray*/

///Sum of all Subarrrays
// Given an array of size n.Output sum of each subarray of the given array. 

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	int current=0;
	for(int i=0;i<n;i++){
		current=0;
		for(int j=i;j<n;j++){
			current+=arr[j];
			cout<<current<<endl;
			  
		}
		
	}
	return 0;
}
