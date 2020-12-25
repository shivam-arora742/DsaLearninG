#include<iostream>
using namespace std;

int updateBit(int n,int i,int value){
    int mask=~(1<<i);
    n= (n & mask);
return (n | (value<<i));
}

int main(){
int n;
cin>>n;    //number
int i;
cin>>i;    //location
cout<<updateBit(n,i,1);
return 0;
}
