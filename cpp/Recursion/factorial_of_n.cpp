#include<iostream>
using namespace std;

int factorial(int n){
if(n==0){                        //base case
    return 1;
}
int smallAns=n*factorial(n-1);   //small answer
return smallAns;                //conclusion
}
int main(){
int n=5;
cout<<factorial(n);
}
