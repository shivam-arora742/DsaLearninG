// Leetcode Dynamic Programming- Fibonacci Number

/*
The Fibonacci numbers, commonly denoted F(n) form a sequence, called the Fibonacci sequence, such that each number is the sum of the two preceding ones, starting from 0 and 1. That is,

F(0) = 0, F(1) = 1
F(n) = F(n - 1) + F(n - 2), for n > 1.
Given n, calculate F(n).

Example:

Input: n = 4
Output: 3
Explanation: F(4) = F(3) + F(2) = 2 + 1 = 3.
*/

// Approach-1 : Using recursion:
class Solution {
public:
    int fib(int n) {
//         base case:
        if(n==1)return 1;
        if(n==0)return 0;
//         recursive calls
        int res=fib(n-1)+fib(n-2);
// resultant:
        return res;
    }
};
// Runtime:16ms .
// Memory:5.9mb .

// Approach-2: Recursion with Memoization:
class Solution {
// public scoped array 'dp' for 30 numbers:
    int dp[50]={0};
public:
    int fib(int n) {
//         base case:n=0&1:
        if(n<=1)return dp[n]=n;
//         if already calculated & known:
        if(dp[n]!=0)return dp[n];
        
//         for not known values:
        return dp[n]=fib(n-1)+fib(n-2);
    }
};

// runtime: 0ms (100% faster).
// memory: 5.9 mb.
