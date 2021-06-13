//Question

//Given an array, cyclically rotate the array clockwise by one

// I/P:  1 2 3 4 5

// O/P:  5 1 2 3 4


#include<iostream>
using namespace std;

int main(){
//input:
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}

//rotate by one:
int tp=arr[n-1];
for(int i=n-1;i>0;i--){
    arr[i]=arr[i-1];
}
arr[0]=tp;

//output:
for(int i=0;i<n;i++){
    cout<<arr[i];
}

return 0;
}

