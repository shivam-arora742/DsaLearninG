// Codechef-Array-Small Factorial:

/*
Input
An integer t, 1<=t<=100, denoting the number of testcases, followed by t lines, each containing a single integer n, 1<=n<=100.

Output
For each integer n given at input, display a line with the value of n!

Sample 1:
Input
Output
4
1
2
5
3
1
2
120
6
*/


// Code:
#include <bits/stdc++.h>
#include <iostream>
#include <boost/multiprecision/cpp_int.hpp> 
using namespace boost::multiprecision; 
using namespace std;

int main() {
	// your code goes here
// 	Test cases:
int t;
cin>>t;
while(t--){
    // input integer -n :
    int n;
    cin>>n;
    
    // calculate factorial:
    cpp_int fact=1;
    while(n){
        fact=fact*n;
        n--;
    }
    cout<<fact<<endl;
}
return 0;
}



