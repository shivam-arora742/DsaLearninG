#include<iostream>
using namespace std;

void print_Ascend(int n){
    if(n==0){
        return ;
    }
    print_Ascend(n-1);    //recursive calling
    cout<<n<<" ";         //printing elements
}

int main(){
int n;
cin>>n;
cout<<endl;
print_Ascend(n);
cout<<endl;
return 0;
}
