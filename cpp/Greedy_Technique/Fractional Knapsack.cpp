//With structures and comparator stl function
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//structure for each node/item.
struct Node{
int profit;
int weight;
Node(int x,int y){
this->profit=x;
this->weight=y;
}
};

//comparator function for sorting in descending order of p/w ratio.
bool cmp(struct Node a,struct Node b){
double r1=double(a.profit)/(double)(a.weight);
double r2=double(b.profit)/(double)(b.weight);
return r1>r2;
}

double knapsack(struct Node arr[],int n,int M){
//    sorting Item on basis of ratio
sort(arr, arr + n, cmp);
    double total_profit=0.0;
    int current_weight=0;
    for(int i=0;i<n;i++){
        if((arr[i].weight+current_weight)<=M){
            current_weight+=arr[i].weight;
            total_profit+=arr[i].profit;
        }
        else{
            int remain=M-current_weight;
            total_profit+=arr[i].profit*(double(remain)/double(arr[i].weight));
            break;
        }
    }
    return total_profit;
}

int main(){
Node arr[]={{60,10},{100,20},{120,30}};
// In this case, sizeof(arr) return the number of bytes held by the entire structure, in this case, the array “arr”. sizeof(arr[0]);
int n=sizeof(arr)/sizeof(arr[0]);
int M=50;//total capacity of knapsack.
cout<<"total profit:"<<knapsack(arr,n,M);
return 0;
}
