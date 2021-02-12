#include<iostream>
using namespace std;

bool IsPower2(int n){
int res= (n & n-1);
if(n==0 || res==0)return true;
else return false;
}

int main(){
int n;
cin>>n;
int tmp =IsPower2(n);
if(tmp!=0){
cout<<"yes";
}
else {
    cout<<"no";
}
return 0;
}
////////////////////////////////////////////
//Approach-2

//User function Template for C++
// Function to check if given number n is a power of two.

bool isPowerofTwo(long long n){
    
    // Your code here
    if(n==0){
        return false;
    }
    if((n&n-1)==0){
        return true;
    }
    return false;
    
}
//execution time:0.16s
