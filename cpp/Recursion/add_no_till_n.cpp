include<iostream>
using namespace std;

int add(int n){
if(n==0){        //base case
    return 0;
}
int sum=n+add(n-1);  //small answer
return sum;          //conclusion
}
int main(){
int n=5;
cout<<add(n);
}
