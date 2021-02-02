#include<iostream>
using namespace std;

int fib(int n){
if(n==0 || n==1){             //base case
    return n;
}
int ans=fib(n-1)+fib(n-2);   //small answer
return ans;                 //conclusion
}
int main(){
int n=6;
cout<<fib(n);
}
