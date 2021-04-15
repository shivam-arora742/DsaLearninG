//Without structure (basic approach)
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool cmp(double a,double b){
return a>b;
}

double knapsack(int wt[],int profit[],int n,int M){
    double p_w_ratio[n];
    for(int i=0;i<n;i++){
        p_w_ratio[i]=double(profit[i])/double(wt[i]);
    }
    sort(p_w_ratio,p_w_ratio+n,cmp);
     double total_profit=0.0;
    int current_weight=0;
    for(int i=0;i<n;i++){
            if((wt[i]+current_weight)<=M){
            current_weight+=wt[i];
            total_profit+=profit[i];
        }
    else{
        int remain=M-current_weight;
        total_profit+=profit[i]*(double(remain)/double(wt[i]));
            break;
    }
    }
    return total_profit;
}

int main(){
int wt[]={10,20,30};
int profit[]={60,100,120};
int M=50;//total capacity of knapsack.
cout<<"total profit:"<<knapsack(wt,profit,3,M);
return 0;
}
