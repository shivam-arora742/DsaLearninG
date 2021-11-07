// GFG -Arrays: Equilibrium Point

/*
Given an array A of n positive numbers. The task is to find the first Equilibium Point in the array. 
Equilibrium Point in an array is a position such that the sum of elements before it is equal to the sum of elements after it.

Example 1:

Input: 
n = 5 
A[] = {1,3,5,2,2} 
Output: 3 
Explanation: For second test case 
equilibrium point is at position 3 
as elements before it (1+3) = 
elements after it (2+2). 

*/

// Code & Approach:
 int equilibriumPoint(long long a[], int n) {
    
        // Your code here:
        // for single elemnt in array:
        if(n==1){
            return 1;
        }
        
        // variables declaration:
        long long  int sum_left=0;
        long long int total_sum=0;
        
        // calcultion of total sum of array:
        for(int i=0;i<n;i++){
            total_sum+=a[i];
        }
        
        // check for left_sum==right_sum
        for(long long int i=0;i<n;i++){
            if(sum_left==total_sum-sum_left-a[i]){
                return i+1;
            }
            sum_left+=a[i];
        }
        
        // for no equilibrium point:
        return -1;
    }
};

// Time: 0.3 ms
// Memory: O(1)