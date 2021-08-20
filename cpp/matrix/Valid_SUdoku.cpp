// Valid Sudoku
/*
Determine if a 9 x 9 Sudoku board is valid. Only the filled cells need to be validated according to the following rules:

Each row must contain the digits 1-9 without repetition.
Each column must contain the digits 1-9 without repetition.
Each of the nine 3 x 3 sub-boxes of the grid must contain the digits 1-9 without repetition.
Note:

A Sudoku board (partially filled) could be valid but is not necessarily solvable.
Only the filled cells need to be validated according to the mentioned rules.
 

Example 1:


Input: board = 
[["5","3",".",".","7",".",".",".","."]
,["6",".",".","1","9","5",".",".","."]
,[".","9","8",".",".",".",".","6","."]
,["8",".",".",".","6",".",".",".","3"]
,["4",".",".","8",".","3",".",".","1"]
,["7",".",".",".","2",".",".",".","6"]
,[".","6",".",".",".",".","2","8","."]
,[".",".",".","4","1","9",".",".","5"]
,[".",".",".",".","8",".",".","7","9"]]
Output: true

*/


// Code:
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
//         row and cols of the board:
        int Rows=board.size();
        int Cols=board[0].size();
        
        
//         using 3 maps to keep the track of each row,col and box doesnt have identical elements.
        unordered_map<char,int>rows[9];   
        unordered_map<char,int>cols[9];  
        unordered_map<char,int>box[9];
        
        for(int i=0;i<Rows;i++){
            for(int j=0;j<Cols;j++){
//                 store the cell character:
                char ch=board[i][j];
//                 if row or col or box has identical element or its occurance >0 return false
                if(ch!='.' && (rows[i][ch]++ >0  || cols[j][ch]++ >0 || box[i/3*3+j/3][ch]++ >0)){
                    return false;
                }
            }
        }
        return true;
    }
};

// Runtime:20ms (76.48% faster).
// Memory:20.9MB .