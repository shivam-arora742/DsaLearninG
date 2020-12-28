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
