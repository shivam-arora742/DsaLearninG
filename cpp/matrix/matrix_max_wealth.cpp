// Leetcode:Matrix:

/*
You are given an m x n integer grid accounts where accounts[i][j] is the amount of money the i​​​​​​​​​​​th​​​​ customer has in the j​​​​​​​​​​​th​​​​ bank. Return the wealth that the richest customer has.

A customer's wealth is the amount of money they have in all their bank accounts. The richest customer is the customer that has the maximum wealth.

 

Example 1:

Input: accounts = [[1,2,3],[3,2,1]]
Output: 6
Explanation:
1st customer has wealth = 1 + 2 + 3 = 6
2nd customer has wealth = 3 + 2 + 1 = 6
Both customers are considered the richest with a wealth of 6 each, so return 6.
*/

// Code & Approach:
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
//      to keep a track of maximum wealth;
        int  max_wealth=0;
        for(int i=0;i<accounts.size();i++){
//             take each customer and calculate customer_wealth;
            int customer_wealth=0;
            for(int j=0;j<accounts[i].size();j++){
                customer_wealth+=accounts[i][j];
            }
//             if customer_wealth>max_wealth, make it as max.
            if(customer_wealth>max_wealth){
                max_wealth=customer_wealth;
            }
        }
//         return max_wealth;
        return max_wealth;
    }
};

// Runtime:4 ms, faster than 93.52%
// Memory: 7.8 MB, less than 86.17%