// Leetcode-DP Easy:
// Pascal Triangle:

/*
Given an integer numRows, return the first numRows of Pascal's triangle.

In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:

Example 1:

Input: numRows = 5
Output: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]
Example 2:

Input: numRows = 1
Output: [[1]]
*/

// Code & Approach:
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
//         matrix for answer:
        vector<vector<int>> ans;
        for(int i=0;i<numRows;i++){
//             array for each row with size(i+1) & default values(1):
            vector<int> row(i+1,1);
//             for internal elements-addition:
            for(int j=1;j<i;j++){
                row[j]=ans[i-1][j]+ans[i-1][j-1];
            }
            ans.push_back(row);
        }
        return ans;
    }
};