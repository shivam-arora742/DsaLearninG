// Codechef- Greedy Approach- Easy -" Score High"

/*
Problem
Chef is taking a tough examination. The question paper consists of NN objective problems and each problem has 44 options A, B, C,A,B,C, and DD, out of which, exactly one option is correct.

Since Chef did not study for the exam, he does not know the answer to any of the problems. Chef was looking nearby for help when his friend somehow communicated the following information:

Exactly N_AN 
A
​
  problems have option AA as the answer.
Exactly N_BN 
B
​
  problems have option BB as the answer.
Exactly N_CN 
C
​
  problems have option CC as the answer.
Exactly N_DN 
D
​
  problems have option DD as the answer.
Note that:

N_A + N_B + N_C + N_D = NN 
A
​
 +N 
B
​
 +N 
C
​
 +N 
D
​
 =N.
Each problem is worth exactly 11 mark and there is no negative marking.
Even though Chef knows the number of correct options of each type, he does not know the correct answer to any problem.
Based on the given information, find the maximum marks Chef can guarantee if he marks the answers optimally.

Input Format
First line will contain TT, number of test cases. Then the test cases follow.
First line of each test case contains an integer NN denoting the number of problems.
Second line of each test case contains 44 integers N_A, N_B, N_C,N 
A
​
 ,N 
B
​
 ,N 
C
​
 , and N_DN 
D
​
  - as mentioned in the problem statement.
Output Format
For each test case, output the maximum marks Chef can guarantee if he marks the answers optimally.

Constraints
1 \leq T \leq 10001≤T≤1000
1 \leq N \leq 10^51≤N≤10 
5
 
0 \leq N_A, N_B, N_C, N_D \leq N0≤N 
A
​
 ,N 
B
​
 ,N 
C
​
 ,N 
D
​
 ≤N
N_A + N_B + N_C + N_D = NN 
A
​
 +N 
B
​
 +N 
C
​
 +N 
D
​
 =N
Sample 1:
Input
Output
2
5
0 0 5 0
10
7 1 1 1
5
7
*/


// Code & Approach:
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
// 	enter test cases-T:
	int T;
	cin>>T;
	while(T--){
	   // enter no of MCQS:
	    int N;
	    cin>>N;
	   // no of questions of each type:
	    int a[4];
	    int max=0;
	   // calculate max value among it:
	    for(int i=0;i<4;i++){
	        cin>>a[i];
	        if(a[i]>max){
	            max=a[i];
	        }
	    }
	   // display max value among type of each question:
	    cout<<max<<endl;
}
	return 0;
}