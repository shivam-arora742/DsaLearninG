#include<iostream>
using namespace std;

bool IsSorted(int arr[],int n){
if(n==1){
    return true;     //base case
}
bool restArray=IsSorted(arr+1,n-1);    //small answer
return (restArray &&(arr[0]<arr[1]));   //conclusion
}

int main(){
int arr[5]={0,1,5,7,9};
cout<<IsSorted(arr,5);
return 0;
}
