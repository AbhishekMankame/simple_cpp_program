/* Time Complexity:
Time complexity is a tool, through using which we calculate or analyize or estimate the execution time of the written code 

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    int sum=0;
    sum=x+x;
    // Number of iterations --> 3
    //O(3)

    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int y;
        y=5;
        y++;
    }
    // O(5) + O(3*n)
    // Overall complexity of the code is O(n) as O(n)>>>>O(1)

    // some important points
    /*
    O(N) + O(N) = O(N)
    O(k*N) = O(N) if K is very small (K<<<<N)

    Numbers of interations in 1 second in programming websites is --> 10^7 to 10^8
    If the numbers of iterations are in the given range then the code will run properly
    */


    return 0;
}
