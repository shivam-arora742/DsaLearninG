//Array-Kadane's Algorithm

//Statement:Given an array find out maximum sum contigous sub-array.
#include<iostream>
#include<bits/stdc++.h>

using namespace std;


int kadane_algo(int arr[],int n){

int max_end_here=0;        //gives the max sub-array till the position end.

int max_so_far=INT_MIN;    //gives the max sum sub-array so far.

for(int i=0;i<n;i++){     //iterate whole array .

    max_end_here+=arr[i]; //add the element with max_end_here.

    if(max_end_here<arr[i]){
        max_end_here=arr[i];     //check if the element is max from beginning.
    }
    if(max_end_here>max_so_far){
        max_so_far=max_end_here;     //if max subarray has greater sum than previous ,update.
    }
}
return max_so_far;             //return maximum sum of sub-array.
}

//Main Function

int main(){
//Example-1:
int arr[8]={-2,-3,4,-1,-2,1,5,-3};
cout<<"Maximum Sum Contigous Sub-array: "<<kadane_algo(arr,8);

//Example-2:
int arr1[4]={-2,-1,2,-3};
cout<<endl;
cout<<"Maximum Sum Contigous Sub-array: "<<kadane_algo(arr1,4);
return 0;
}
//T(n)=O(n)
