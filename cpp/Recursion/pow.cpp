// Leetcode- Recursion Medium- Pow(x,n):

/*
Implement pow(x, n), which calculates x raised to the power n (i.e., xn).

 

Example 1:

Input: x = 2.00000, n = 10
Output: 1024.00000
Example 2:

Input: x = 2.10000, n = 3
Output: 9.26100
Example 3:

Input: x = 2.00000, n = -2
Output: 0.25000
Explanation: 2-2 = 1/22 = 1/4 = 0.25
*/

// Approach-1 (passed 291 / 305 test cases):
class Solution {
public:
    double myPow(double x, int n) {
        // base condition for recursion:
        if(n==0) return 1.00000;

        // recursive call for positive power:
        if(n>0){
        double res=x * myPow(x,n-1);
        return res;
        }

        // recursive call for negative power:
        else {
            double res=(1/x) * myPow(x,n+1);
            return res;
        }
    }
};

// Approach-2 : (time: 4ms memory:5.8mb [82.49% lesser])
class Solution {
public:
    double myPow(double x, int n) {
    //    store value of n into variable for algo:
    long long nn=n;
    // res for output:
    double res=1.00000;

    // for negative power:
    if(nn<0) nn=-1*nn;

    // loop over :
    while(nn){
        // for power multiple of 2:
        if(nn%2==0){
            x=x*x;
            nn=nn/2;
        }
        // for power not multiple of 2:
        else{
            res=res*x;
            nn=nn-1;
        }
    }

    // for negative powers:
    if(n<0)res=double(1.0)/double(res);
    return res;
    }
};