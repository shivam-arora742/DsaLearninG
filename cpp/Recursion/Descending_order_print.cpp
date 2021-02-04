#include<iostream>
using namespace std;

void print_Decend(int n){
if(n==0){
return;
}
cout<<n<<" ";
print_Decend(n-1);
}

int main(){
int n;
cin>>n;
cout<<endl;
print_Decend(n);
cout<<endl;
return 0;
}
