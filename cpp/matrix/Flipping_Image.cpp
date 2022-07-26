// Leetcode-Matrix- Flipping an Image:

/*
Given an n x n binary matrix image, flip the image horizontally, then invert it, and return the resulting image.

To flip an image horizontally means that each row of the image is reversed.

For example, flipping [1,1,0] horizontally results in [0,1,1].
To invert an image means that each 0 is replaced by 1, and each 1 is replaced by 0.

For example, inverting [0,1,1] results in [1,0,0].

Example 1:

Input: image = [[1,1,0],[1,0,1],[0,0,0]]
Output: [[1,0,0],[0,1,0],[1,1,1]]
Explanation: First reverse each row: [[0,1,1],[1,0,1],[0,0,0]].
Then, invert the image: [[1,0,0],[0,1,0],[1,1,1]]
Example 2:

Input: image = [[1,1,0,0],[1,0,0,1],[0,1,1,1],[1,0,1,0]]
Output: [[1,1,0,0],[0,1,1,0],[0,0,0,1],[1,0,1,0]]
Explanation: First reverse each row: [[0,0,1,1],[1,0,0,1],[1,1,1,0],[0,1,0,1]].
Then invert the image: [[1,1,0,0],[0,1,1,0],[0,0,0,1],[1,0,1,0]]
*/

//Solution & Approach:

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
//         solution:
//         get the matrix size-> rows or cols (square matrix):
        int n=image.size();
        
//         now iterate over all rows & reverse each of it:
        for(int i=0;i<n;i++){
            reverse(image[i].begin(),image[i].end());
        }
        

//         for invert of image element do negation:
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                image[i][j]=!image[i][j];
            }
        }
        return image;
    }
};

//Time:0ms(100% faster)
//Memory-8.6MB (93.28% less)
