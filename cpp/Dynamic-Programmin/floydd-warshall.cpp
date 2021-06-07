#include<iostream>
#include<bits/stdc++.h>

using namespace std;
const int INF=1e9;

int main(){
//create graph:
vector<vector<int>> graph={
                           {0,     5,     INF,    10},
                           {INF,   0,     3,     INF},
                           {INF,  INF,    0,      1},
                           {INF,  INF,    INF,    0}
                          };

// vertices in graph;

int n=graph.size();

//distance matrix:
vector<vector<int>>  distance=graph;

//floyd warshall algo:
for(int k=0;k<n;k++)
    for(int i=0;i<n;i++)
      for(int j=0;j<n;j++)
         if(distance[i][j]>(distance[i][k]+distance[k][j])){
            distance[i][j]=distance[i][k]+distance[k][j];
}

//display output:
cout<<"ALL PAIR SHORTEST DISTANCE:"<<endl;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
    if(distance[i][j]==INF){
        cout<<"INF \t";
    }
    else{
        cout<<distance[i][j]<<" \t";
    }
}
    cout<<"\n";
}

return 0;
}
//Time-complexity:O(V^3)
