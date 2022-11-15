/// Bubble sort

/* Bubble sort - if there are n elements in an array then we need to do n-1 iterations to sort an array*/

 #include<bits/stdc++.h>
 using namespace std;
 int main(){
 	int n;
 	cin>>n;
 	int arr[n];
 	for(int i=0;i<n;i++){
 		cin>>arr[i];
	 }
	 
	 int counter=1;
	 while(counter<n){
	 	for(int i=0;i<n-counter;i++){
	 		if(arr[i]>arr[i+1]){
	 			int temp=arr[i];
	 			arr[i]=arr[i+1];
	 			arr[i+1]=temp;
			 }
		 }
		 counter++;
	 }
	 cout<<"Sorted array is: ";
	for(int i=0;i<n;i++){
	 	cout<<arr[i]<<" ";
	 }
 }
