#include<iostream>
#include<vector>
using namespace std;
int main(){
	// Demo Vector
    vector<int> arr={9,8,97,9,8};
    // Fill Constructor
    vector<int> arr2(10,9);
    
    //Pop back
    arr.pop_back();     //It will pop the last element present
    //Push back O(1)
    arr.push_back(15);

    cout<<arr.size()<<endl;
    cout<<arr.capacity()<<endl;
    for(int i=0;i<=arr.size();i++){
        cout<<arr[i]<<endl;
    }
    for(int j=0;j<=arr2.size();j++){
        cout<<arr2[j]<<endl;
    }
    
    return 0;
}
