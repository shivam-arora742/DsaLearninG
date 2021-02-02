
#include<iostream>
using namespace std;

int power(int n,int p){
if(p==0){      //base case
    return 1;
}
int result=n*power(n,p-1);   //small answer
return result;              //conclusion
}
int main(){
int n=5;
int p=4;
cout<<power(n,p);
}
