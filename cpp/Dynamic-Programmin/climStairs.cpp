// Leetcode-DP Easy- Climb Stairs:

/*

You are climbing a staircase. It takes n steps to reach the top.

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

 

Example 1:

Input: n = 2
Output: 2
Explanation: There are two ways to climb to the top.
1. 1 step + 1 step
2. 2 steps
Example 2:

Input: n = 3
Output: 3
Explanation: There are three ways to climb to the top.
1. 1 step + 1 step + 1 step
2. 1 step + 2 steps
3. 2 steps + 1 step
*/

// Code & Approach:
class Solution {
public:
//     auxiliary function -memo:
    int memo(int n,vector<int> &dp){
//         base case:
        if(n==0 || n==1)return 1;
//         if already calculated return it:
        if(dp[n]!=-1)return dp[n];
//         calculate no of ways to reach 'n' step:
          return dp[n]=memo(n-1,dp)+memo(n-2,dp);
        
    }
    
//     Main Method:
    int climbStairs(int n) {
//         array for storing result:
        vector<int> dp(n+1,-1)
        int res=memo(n,dp);
        return res;
}
};
// Runtime: 0ms (100% faster)
// Memory:6.2mb
