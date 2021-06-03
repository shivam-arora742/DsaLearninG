#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//comparative function
//for reverse order
bool f(int x,int y){
return x>y;
}
//for ascending order
bool As(int x,int y){
return x<y;
}

int main(){

vector<int> A={11,2,3,44};    //syntax of vector(int)
cout<<A[2]<<endl;             //access 1st element

sort(A.begin(),A.end());      //sorting the vector elements in O(N logN)
cout<<"elements:\n";

for(int i=0;i<4;i++){         //display elements
    cout<<A[i]<<" ";
}
cout<<endl;

cout<<"binary search result\n";
bool present =binary_search(A.begin(),A.end(),3);         //binary search      //true
cout<<present<<endl;
 present =binary_search(A.begin(),A.end(),12);                                 //false
 cout<<present<<endl;

//add new elements:
A.push_back(100);
cout<<"new element:"<<A[4];
A.push_back(100);
A.push_back(100);
A.push_back(120);

//now vector becomes:
//2,3,11,44,100,100,100,120;

//upper & lower bounds
vector<int>::iterator it=lower_bound(A.begin(),A.end(),100);
vector<int>::iterator it1=upper_bound(A.begin(),A.end(),100);
cout<<"Bounds:\n";
cout<<*it<<endl;
cout<<*it1<<endl;

cout<<"Diff btw Iterators:\n";
cout<<it1-it<<endl;            //count occurance of element in lists.
cout<<*it1-*it<<endl;

//sort vector in reverse order(comparative function)
sort(A.begin(),A.end(),f);

//To print vector elements using iterator;

vector<int>::iterator t;
cout<<"reverse order\n";
for(t=A.begin();t!=A.end();t++)
{
    cout<<*t<<" ";
}
cout<<endl;

//sort vector ascending order;
sort(A.begin(),A.end(),As);

 //Print vector using for each loop
 cout<<"printing using For Each\n";
 for(int x:A){
    cout<<x<<" ";
 }
 cout<<endl;

 //Reference  iteration;
 cout<<"Iteration &updattion using refernce\n";
 for(int &y:A){
    y++;
 }
 for(int &y:A){
    cout<<y<<" ";
 }
 return 0;
}
