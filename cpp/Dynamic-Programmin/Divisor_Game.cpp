// Leetcode: DP: Divisior Game:

/*
Alice and Bob take turns playing a game, with Alice starting first.

Initially, there is a number n on the chalkboard. On each player's turn, that player makes a move consisting of:

Choosing any x with 0 < x < n and n % x == 0.
Replacing the number n on the chalkboard with n - x.
Also, if a player cannot make a move, they lose the game.

Return true if and only if Alice wins the game, assuming both players play optimally.

Example 1:

Input: n = 2
Output: true
Explanation: Alice chooses 1, and Bob has no more moves.

Example 2:
Input: n = 3
Output: false
Explanation: Alice chooses 1, Bob chooses 1, and Alice has no more moves.

*/
// Approach-1
class Solution {
public:
    bool divisorGame(int n) {
//         approach-1:
//         if n==even: ALice wins:
        if(n%2==0)return true;
//         if n==odd: Bob wins:
        else return false;
    }
};

//Runtime: 0ms (100% faster).
// Memory: 5.7mb (89.35 % effecient).

// ---------------------------------------------------------------------------------------------------------------------------------------------------

// Approach-2: using Recursion & DP:

// Code:
class Solution {
public:
//     dp array to{ keep track of calculated results:
    int dp[10001];
    int helper(int n){
//         if N==1 , no number will be choosen:
        if(n==1)return 0;
//         if already calculated result:
        if(dp[n]!=-1){
            return dp[n];
        }
//         for not calculated result:
        else{
//             iterate from 1 to n-1 and calculate result:
            for(int i=1;i<n;i++){
                if(n%i==0){
                    // for (n-1) id Bob wins, then alice loses:
                    if(helper(n-i)==0)return dp[n]=1;
                }
            }
//             if not found such number:
            return dp[n]=0;
        }
        
    }
    bool divisorGame(int n) {
//        Use memset() to set all values as 0 or -1 for integral data types.
        memset(dp,-1,sizeof dp);
        return helper(n);
    }
};
// Runtime: 4ms (faster - 25.33% ).
// memory: 6mb