// Codechef- DP - Sum in a triangle:

/*
Problem
Given an integer NN, let us consider a triangle of numbers of NN lines in which a number a_{11}a 
11
​
  appears in the first line, two numbers a_{21}a 
21
​
  and a_{22}a 
22
​
  appear in the second line, three numbers a_{31}a 
31
​
 , a_{32}a 
32
​
  and a_{33}a 
33
​
  appear in the third line, etc. In general, ii numbers a_{i1}, a_{i2} \dots a_{ii}a 
i1
​
 ,a 
i2
​
 …a 
ii
​
  appear in the i^{th}i 
th
  line for all 1 \leq i \leq N1≤i≤N. Develop a program that will compute the largest of the sums of numbers that appear on the paths starting from the top towards the base, so that:

on each path the next number is located on the row below, more precisely either directly below or below and one place to the right.
Warning: large Input/Output data, be careful with certain languages

Input Format
The first line of the input contains an integer TT, the number of test cases.
Then T test cases follow. Each test case starts with an integer NN, the number of rows. Then NN lines follow where in i^{th}i 
th
  line contains ii integers a_{i1}, a_{i2} \dots a_{ii}a 
i1
​
 ,a 
i2
​
 …a 
ii
​
 .
Output Format
For each test case print the maximum path sum in a separate line.

Constraints
1 \leq T \leq 10001≤T≤1000
1 \leq N \lt 1001≤N<100
0 \leq a_{ij} \lt 1000≤a 
ij
​
 <100
Sample 1:
Input
Output
2
3
1
2 1
1 2 3
4
1
1 2
4 1 2
2 3 1 1
*/

// Code & Approach:
#include <iostream>
using namespace std;

int main() {
	// your code goes here
// 	input:
	int T;
	cin>>T;
	while(T--){
	    int N;
	    cin>>N;
	    int arr[N][N];
	    for(int i=0;i<N;i++){
	        for(int j=0;j<=i;j++){
	            cin>>arr[i][j];
	        }
	    }
	    
	   // start from second last row & add max of the choice below it:
	   int k=N-2;
	   while(k>=0){
	       for(int i=0;i<=k;i++){
	           arr[k][i]+=max(arr[k+1][i],arr[k+1][i+1]);
	       }
	       k--;
	   }
	   //atlast return top element as max sum in triangle:
	   cout<<arr[0][0]<<endl;
	}
	return 0;
