// Codechef-Binary Search-Coins & Triangle:

/*
Chef belongs to a very rich family which owns many gold mines. Today, he brought N gold coins and decided to form a triangle using these coins. Isn't it strange?

Chef has a unusual way of forming a triangle using gold coins, which is described as follows:

He puts 1 coin in the 1st row.
then puts 2 coins in the 2nd row.
then puts 3 coins in the 3rd row.
and so on as shown in the given figure.
1461147954-8b9f4b7d27-A.png
Chef is interested in forming a triangle with maximum possible height using at most N coins. Can you tell him the maximum possible height of the triangle?

Input
The first line of input contains a single integer T denoting the number of test cases.

The first and the only line of each test case contains an integer N denoting the number of gold coins Chef has.

Output
For each test case, output a single line containing an integer corresponding to the maximum possible height of the triangle that Chef can get.

Constraints
1 ≤ T ≤ 100
1 ≤ N ≤ 109
Subtasks
Subtask 1 (48 points) : 1 ≤ N ≤ 105
Subtask 2 (52 points) : 1 ≤ N ≤ 109
Sample 1:
Input
Output
3
3
5
7
2
2
3
Explanation:
Test 1: Chef can't form a triangle with height > 2 as it requires atleast 6 gold coins. Test 2: Chef can't form a triangle with height > 2 as it requires atleast 6 gold coins. Test 3: Chef can't form a triangle with height > 3 as it requires atleast 10 gold coins.
*/

// Code:
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
// 	input Test Cases:
int T;
cin>>T;
while(T--){
    
    // input no of coins:
    long long int N;
    cin>>N;
    
    // formula for max height: h= -1+/- sqrt(1+8N)/2
    long long h;
    N=sqrt(8*N+1);
    h=(N-1)/2;
    cout<<h<<endl;
}
	return 0;
}
