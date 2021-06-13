//Question .
//Given an array arr[] of size N, the task is to sort the array in ascending order

// I/P: 6    0 9 4 10 7 8
// O/P:      0 4 7 8 9 10


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

//ascending sort:
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(arr[i]>arr[j]){
            int tmp=arr[i];
            arr[i]=arr[j] ;
            arr[j]=tmp    ;
        }
    }
}

//output:
for(int i=0;i<n;i++){
    cout<<arr[i];
}
return 0;
}
