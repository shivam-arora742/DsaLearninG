#include<iostream>
using namespace std;

int no_set_bit(int n){
int cnt=0;
while(n){
    n= (n &(n-1));
    cnt++;
}
return cnt;
}

int main(){

cout<<"set bits:"<<no_set_bit(10)<<endl;
return 0;
}
