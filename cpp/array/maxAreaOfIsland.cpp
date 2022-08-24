// Leetcode-Matrix -Medium:
/*
Max Area of Island:

You are given an m x n binary matrix grid. An island is a group of 1's (representing land) connected 4-directionally (horizontal or vertical.) You may assume all four edges of the grid are surrounded by water.

The area of an island is the number of cells with a value 1 in the island.

Return the maximum area of an island in grid. If there is no island, return 0.

I/P:
Input: grid = [[0,0,1,0,0,0,0,1,0,0,0,0,0],[0,0,0,0,0,0,0,1,1,1,0,0,0],[0,1,1,0,1,0,0,0,0,0,0,0,0],[0,1,0,0,1,1,0,0,1,0,1,0,0],[0,1,0,0,1,1,0,0,1,1,1,0,0],[0,0,0,0,0,0,0,0,0,0,1,0,0],[0,0,0,0,0,0,0,1,1,1,0,0,0],[0,0,0,0,0,0,0,1,1,0,0,0,0]]
Output: 6
Explanation: The answer is not 11, because the island must be connected 4-directionally.
*/

// Approach & Code-1:
class Solution {
public:
 
    
// dfs function for finding land(grid[i][j]==1):
int dfs(vector<vector<int>>& grid, int i,int j){
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size() || grid[i][j]==0){
            return 0;
        }
        grid[i][j]=0;
        int left=dfs(grid,i,j-1);
        int right=dfs(grid,i,j+1);
        int top=dfs(grid,i-1,j);
        int bottom=dfs(grid,i+1,j);
        return 1+left+right+top+bottom;
}
    
int maxAreaOfIsland(vector<vector<int>>& grid) {
//         resultant:
        int resultant=0;
//         iterate over each cell of matrix:
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1){
                resultant=max(resultant,dfs(grid,i,j));
            }
            }
        }
    return resultant;
    }
};

// Time: 18ms (91.38%faster) 
// Memory:23.3MB