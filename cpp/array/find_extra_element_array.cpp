#include<iostream>
using namespace std;

int find_extra(int A[],int B[],int n){
    int i;
for(i=0;i<n;i++){
if(A[i]!=B[i])
return i;
}
//return n;
}

int main(){
int A[] = {2,4,6,8,9,10,12};
int B[] = {2,4,6,8,10,12};
int n=sizeof(B)/sizeof(B[0]);
cout<<find_extra(A,B,n);
return 0;
}
