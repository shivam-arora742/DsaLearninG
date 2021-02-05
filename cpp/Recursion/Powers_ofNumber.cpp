//You need to complete this fucntion

long long power(int N,int R)
{
   //Your code here
   if(R==0){     //base case
       return 1;
   }
   long long ans=N*power(N,R-1);   //recursive case
   long long result=ans%1000000007; //modulo of power(N,R)
   return result;                   //conclusion&return
}

//GFG recursion question
//execution time:0.09s
