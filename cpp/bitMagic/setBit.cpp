#include<iostream>
using namespace std;

int setBit(int n,int i){
    int mask=1<<i;
    int result= (n | mask);
return result;
}

int main(){
int n;
cin>>n;    //number
int i;
cin>>i;    //location
cout<<setBit(n,i);
return 0;
}
