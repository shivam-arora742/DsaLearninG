// Leetcode-DP-Easy: Min Cost Climbing Stairs

/*
You are given an integer array cost where cost[i] is the cost of ith step on a staircase. Once you pay the cost, you can either climb one or two steps.

You can either start from the step with index 0, or the step with index 1.

Return the minimum cost to reach the top of the floor.

 

Example 1:

Input: cost = [10,15,20]
Output: 15
Explanation: You will start at index 1.
- Pay 15 and climb two steps to reach the top.
The total cost is 15.
Example 2:

Input: cost = [1,100,1,1,1,100,1,1,100,1]
Output: 6
Explanation: You will start at index 0.
- Pay 1 and climb two steps to reach index 2.
- Pay 1 and climb two steps to reach index 4.
- Pay 1 and climb two steps to reach index 6.
- Pay 1 and climb one step to reach index 7.
- Pay 1 and climb two steps to reach index 9.
- Pay 1 and climb one step to reach the top.
The total cost is 6.
 

Constraints:

2 <= cost.length <= 1000
0 <= cost[i] <= 999
*/

// Code & Approach:

// Approach-1: Space Effecient:
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        for(int i=2;i<n;i++){
            cost[i]=min(cost[i-1],cost[i-2])+cost[i];
        }
        return min(cost[n-1],cost[n-2]);
    }
};
// TIme:18ms Memory:13.7mb 

// Approach-2:
class Solution {
public:
    
//     helping function:
    int minCostClimbingStairs(vector<int> &cost,int indx,vector<int> &memo){
//         when we point to any of last 2 index costs:
        if(indx==cost.size()-1 || indx==cost.size()-2 ) return cost[indx];
        
//         for already calculated :
        if(memo[indx]!=0)return memo[indx];
//         for steps +1 & +2:
        int x=minCostClimbingStairs(cost,indx+1,memo);
        int y=minCostClimbingStairs(cost,indx+2,memo);
        return memo[indx]=min(x,y)+cost[indx];
        
    }
//     Approach- Memoization:
    int minCostClimbingStairs(vector<int>& cost) {
//         when there are only 2 steps:
        if(cost.size()==2){
            return min(cost[0],cost[1]);
        }
        
//         vector for memoization:
        vector<int> memo(1001);
//         iterate for both indexes= 0 & 1:
        int x=minCostClimbingStairs(cost,0,memo);
        int y=minCostClimbingStairs(cost,1,memo);
        
//         return min cost of both indexes:
        return min(x,y);
    } 
};
// Time: 10ms Memory:15.3mb