// GFG-matrix:
/*
Adding two matrices:
Given two matrices A and B having (n1 x m1) and (n2 x m2) dimensions respectively. Add A and B. 

Example 1:

Input:
n1 = 2, m1 = 3
A[][] = {{1, 2, 3},
         {4, 5, 6}}

n2 = 2, m2 = 3
B[][] = {{1, 3, 3},
         {2, 3, 3}}

Output: 2 5 6 6 8 9
Explanation:
The summation matrix of A and B is:
res[][] = {{2, 5, 6},
           {6, 8, 9}}
The output is generated by traversing each
row sequentially.
*/

//Code:
class Solution
{   
    public:
    //Function to add two matrices.
    vector<vector<int> > sumMatrix( const vector<vector<int> >& A, const vector<vector<int> >& B)
    {
        // code here:

        // row_size of matrix A:
       int n1=A.size();
       // row_size of matrix B:
        int n2=B.size();
        // col_size of matrix A:
        int m1=A[0].size();
        // col_size of matrix B:
        int m2=B[0].size();

        // Now check if cols&rows of both matrices match:proceed further:
        if((n1==n2)&&(m1==m2)){
            vector<vector<int> > res;    //res matrix for output:
            vector<int >tmp;            //tmp matrix for calculating each row for res:
        for(int i=0;i<n1;i++){
            for(int j=0;j<m1;j++){       //iterate over each element of col & row:
                int t=A[i][j]+B[i][j];      //calculate sum of each position:
                tmp.push_back(t);          //push it into tmp or row matrix:
            }
            res.push_back(tmp);    //finally add the row in res matrix.
            tmp.clear();   //clear tmp matrix for next row.
        }
        return res;
        }
        else{
             vector<vector<int> > v;    //if rows & cols doesnt match , return empty matrix:
             return v;
        }
    }
};

// Runtime:0.0 ms.