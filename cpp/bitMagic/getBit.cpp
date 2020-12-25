#include<iostream>
using namespace std;

int getBit(int n,int i){
return ((n &(1<<i))!=0);
}

int main(){
int n;
cin>>n;    //number
int i;
cin>>i;    //location
cout<<getBit(n,i);
return 0;
}
