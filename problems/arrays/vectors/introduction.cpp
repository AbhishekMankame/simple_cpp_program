// Vector demo
#include<iostream>
#include<vector>
using namespace std;

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt", "w", stderr);
    // Demo vector
    vector<int> arr={1,2,10,5,12};

    //pop_back()
    arr.pop_back();

    // push_back() O(1)
    arr.push_back(3);

    // Print all the elements
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<endl;
    }
    cout<<endl;

    // Size of the vector (Number of elements)
    cout<<arr.size()<<endl;

    // Capacity of the vector (Actual memory allocated to this vector)
    cout<<arr.capacity()<<endl;
    return 0;
}