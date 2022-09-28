/*
Codechef - string - Wordle:

Problem
Chef invented a modified wordle.

There is a hidden word SS and a guess word TT, both of length 55.

Chef defines a string MM to determine the correctness of the guess word. For the i^{th}i 
th
  index:

If the guess at the i^{th}i 
th
  index is correct, the i^{th}i 
th
  character of MM is \texttt{G}G.
If the guess at the i^{th}i 
th
  index is wrong, the i^{th}i 
th
  character of MM is \texttt{B}B.
Given the hidden word SS and guess TT, determine string MM.

Input Format
First line will contain TT, number of test cases. Then the test cases follow.
Each test case contains of two lines of input.
First line contains the string SS - the hidden word.
Second line contains the string TT - the guess word.
Output Format
For each test case, print the value of string MM.

You may print each character of the string in uppercase or lowercase (for example, the strings \texttt{BgBgB}BgBgB, \texttt{BGBGB}BGBGB, \texttt{bgbGB}bgbGB and \texttt{bgbgb}bgbgb will all be treated as identical).

Constraints
1 \leq T \leq 10001≤T≤1000
|S| = |T| = 5∣S∣=∣T∣=5
S, TS,T contain uppercase english alphabets only.
Sample 1:
Input
Output
3
ABCDE
EDCBA
ROUND
RINGS
START
STUNT
BBGBB
GBBBB
GGBBG
*/


// Code & Approach:
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

// auxiliary function for each test case to match guess & hidden string:
string wordle(string s,string t){
    int len=s.size();
    string res="";
    for(int i=0;i<len;i++){
        if(s[i]==t[i]){
            res+='G';
        }
        else{
            res+='B';
        }
    }
    return res;
}

int main() {
	// your code goes here
	int T;
	cin>>T;
//   iterate for each test case:
	while(T--){
	    string s,t;
	    cin>>s;
	    cin>>t;
//     check for match & display output:
	    string M=wordle(s,t);
	    cout<<M<<endl;
	}
	return 0;
}
