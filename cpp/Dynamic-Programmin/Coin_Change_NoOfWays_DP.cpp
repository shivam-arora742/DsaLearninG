// GFG-DP : Coin Change - Number of ways :

/*
You have an infinite supply of coins, each having some value. Find out the number of ways to use the coins to sum-up to a certain required value.

Example 1:

Input: 

value = 4
numberOfCoins = 3
coins[] = {1,2,3}

Output: 4
Explanation: We need to make the change
for value = 4. The denominations are
{1,2,3} Change for 4 can be made:
1+1+1+1
1+1+2
1+3
2+2
So, as it is evident, we can do this in
4 ways.
*/

// Code :

class Solution
{
    public:
    //Function to find out the number of ways to use the coins to
    //sum up to a certain required value.
    long long numberOfWays(int coins[],int numberOfCoins,int value)
    {
        // dp array with size+1 for 0th index:
        long long dp[numberOfCoins+1][value+1];
        // initialize 0th row with 0 & 0th column with 1:
        for(int i=0;i<=numberOfCoins;i++) dp[i][0]=1;
        for(int j=0;j<=value;j++) dp[0][j]=0;
        
        // iterate from (1,1) and check whether to include coin or not:
        for(int i=1;i<=numberOfCoins;i++){
            for(int j=1;j<=value;j++){
                // including condition:
                if(j>=coins[i-1]){
                    dp[i][j]=dp[i][j-coins[i-1]]+dp[i-1][j];
                }
                // if not including:
                else dp[i][j]=dp[i-1][j];
            }
        }
        
        return dp[numberOfCoins][value];
    }
};

// total time taken: 0.0 ms.
