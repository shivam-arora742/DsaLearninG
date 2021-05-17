//N-queen problem:
//STATEMENT:given a chess board of size nxn,and we need to place n queens in it such that no queen attack each other
            //(diagonally,horizontally,vertically).

//Necessary Condition:
//all queens are placed in different rows.(no need to check each for each queen).
//all queens are placed in different columns.(need to check each for each queen).
//all queens are placed in different diagonals.( check each for upper left and right diagonals only).

#include<iostream>
using namespace std;

//check whether queen is safe to place in that position:
bool IsSafe(int **arr,int x,int y,int n){            //**arr->pointer of array pointer,x->row,y->column,n->queen number,total cols&rows.

//check for column:
for(int row=0;row<x;row++){
    if(arr[row][y]==1){         //check if 1->already a queen is placed ,return that row is unsafe to place another queen.
        return false;
    }
}

//check for diagonal:
int row=x,col=y;    //we need 2 iterators , one->going to previous row and col & other to go previous row but next col.
//for left diagonal:
while(row>=0 && col>=0){
    if(arr[row][col]==1){
        return false;
    }
    row--;
    col--;
}

//for right diagonal:
row=x,col=y;
while(row>=0 && col<0){
    if(arr[row][col]==1){
        return false;
    }
    row--;
    col++;
}


//if all the conditions are satisfied,then the position is safe to place queen:
return  true;
}

//function that calls recursively & for backtracking:

bool nQueen(int **arr,int x,int n){    //no need for column as argument as we place 1 queen in 1 row only.
    if(x>=n){        //we have placed all queens successfully.
        return true;
    }

    for(int col=0;col<n;col++){
        if(IsSafe(arr,x,col,n)){             //if the place is safe,add queen in it.
            arr[x][col]=1;

            if(nQueen(arr,x+1,n)){           //check for other rows as well.
                return true;
            }

            arr[x][col]=0;                   //backtracking:
        }
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    //2-dimensional array:
    int **arr=new int*[n];        //creating double point of int arr.
    for(int i=0;i<n;i++){         //allocating memory to the array field.
        arr[i]=new int[n];
        for(int j=0;j<n;j++){      //initialisation of array.
            arr[i][j]=0;
        }
    }

    if(nQueen(arr,0,n)){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
return 0;
}

