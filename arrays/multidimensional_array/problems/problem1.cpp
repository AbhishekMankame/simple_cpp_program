/*
Spiral print:
Write a function that takes in n x m 2D Array, and prints the all array elements in a spiral order. Start from top left corner goes to right, proceeds in a spiral pattern until every element in visited.

Input:
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16

Output:
1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10

*/

#include<bits/stdc++.h>
using namespace std;

void print(int arr[][10], int n, int m){
    // 4 variables
    int startRow=0;
    int endRow=n-1;
    int startCol=0;
    int endCol=m-1;

    // Outer loop(Traverse array boundary)
    while(startCol<=endCol and startRow<=endRow){
        //start row
        for(int col=startCol;col<=endCol;col++){
            cout<<arr[startRow][col];
        }

        //end col
        for(int row=startRow+1;row<=endRow;row++){
            cout<<arr[row][endCol];
        }

        //end row
        for(int col=endCol-1;col>=startCol;col--){
            cout<<arr[endRow][col];
        }

        //start col
        for(int row=endRow-1;row>=startRow;row--){
            //Avoid Duplicate Printing of elements
            if(startCol==endCol){
                break;
            }
            cout<<arr[row][startCol];
        }

        // update the variables to point the inner spiral
        startRow++;
        endRow--;
        startCol++;
        endCol--;
    }
}

void fast(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
}

void solve(){

    // Declaration and initiallization of array
    int arr[][10]={{1,2,3,4},{12,13,14,5},{11,16,15,6},{10,9,8,7}};
    int n=4,m=4;
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