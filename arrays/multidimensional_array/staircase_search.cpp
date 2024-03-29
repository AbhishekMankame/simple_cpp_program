// staircase search
// Write a function that searches for an element in row wise and column wise sorted 2D array

// some of the methods to solve
// Linear search --> Time complexity--> O(N X M)
// Binary search --> Time complexity in worst case --> O(N X logM)
// Staircase search --> Time complexity --> O(M + N)

#include<bits/stdc++.h>
using namespace std;

void fast(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
}

pair<int,int> staircaseSearch(int arr[][4], int n, int m, int key){
    
    // later if the element is not present return the pair of {-1,-1}
    if(key<arr[0][0] or key>arr[n-1][m-1]){
        return {-1,-1};
    }

    //staircase search
    int i=0;
    int j=m-1; //starting from last element of first row

    while(i<n and j>=0){ // search should not go beyond this boundary
        if(arr[i][j]==key){
            return {i,j};
        }
        else if(arr[i][j]>key){
            j--;
        }
        else{
            i++;
        }
    }

    return {-1,-1};
}

void solve(){
    int arr[][4]={{10,20,30,40},
                    {15,25,35,45},
                    {27,29,39,48},
                    {32,33,39,50}};
    
    int n=4,m=4;

    pair<int, int> coords = staircaseSearch(arr, n,m,33);
    cout<<coords.first<<" "<<coords.second<<endl;

}

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
#endif

    fast();
    solve();

    
    return 0;
}