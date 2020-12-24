#include<iostream>
using namespace std;

void duplicate(int n,int arr[]){
    int i,j;
for(i=0;i<n;i++){
for(j=i+1;j<n-i;j++){
if(arr[i]==arr[j]){
cout<<arr[i]<<" ";
}
}
}
}

int main(){
int n,i;
cin>>n;
int arr[n];
for(i=0;i<n;i++){

cin>>arr[i];
}
duplicate(n,arr);
return 0;
}
