#include<iostream>
using namespace std;

int clearBit(int n,int i){
    int mask=~(1<<i);
    int result= (n & mask);
return result;
}

int main(){
int n;
cin>>n;    //number
int i;
cin>>i;    //location
cout<<clearBit(n,i);
return 0;
}

