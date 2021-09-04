// Sets in STL -C++:

#include<bits/stdc++.h>
using namespace std;

// // 1-Normal/Ordered Set:
// // Time complexity of adding & accessing elements in set: log(n).

// int main(){
// // syntax:
// set<string > s;

// // Add elements to set:(unique elemnts only.)
// s.insert("abc");
// s.insert("cde");
// s.insert("cde"); // this elemnt wont be added to set.
// s.insert("aaa");
// s.insert("zxy");

// // Access set element:(will return the position of element if found , else returns end() of set)
// auto it=s.find("aaa");
// if(it!=s.end()){
//     cout<<*it<<endl;
// }


// // Print whole set : 2 ways:
// // 1-use of for-each loop:
// for(string val : s){
//     cout<<val<<" ";
// }
// cout<<endl;

// // // //2-use of iterator:
// // // for(auto it=s.begin() ; it!=s.end() ; it++){
// // //     cout<<*it<<" ";
// // // }

// // Erase element from set: (can take iterator or the element as argument.)
// auto itr=s.find("cde");
// if(itr!=s.end()){
//     s.erase(itr);
// }

// s.erase("aaa");

// return 0;
// }

// ----------------------------------------------------------------------------------------------------------------

// // Question: print all the 'n' strings in lexographical(sorted) order:

// int main(){
//     set<string > st;
//     int n;
//     cout<<"enter number of strings:";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         string str;
//         cin>>str;
//         st.insert(str);
//     }

//     cout<<"Result:"<<endl;
//     for(string value : st){
//         cout<<value<<endl;
//     }
//     return 0;
// }

// ----------------------------------------------------------------------------------------------------------------

// // 2- Un-Ordered Set:(operations same as set )
// // question: check if the set has the string present or not:


// int main(){
//     // syntax:
//     unordered_set<string> s;
    
//     // add elements to set:
//     s.insert("aaa");
//     s.insert("bcde");
//     s.insert("aedg");
//     s.insert("bbb");
//     s.insert("baba");

//     // erase:
//     s.erase("aedg");

//     // check for string:
//     string str="aedg";

//     auto itr=s.find(str);
//     if(itr!=s.end()){
//         cout<<"Yes";
//     }
//     else{
//         cout<<"No";
//     }

//     // print:
//     for(string val :  s){
//         cout<<val<<" ";
//     }

//     return 0;
// }

// ----------------------------------------------------------------------------------------------------------------

// 3-Multi-Set: (allow multiple values but in sorted order)

int main(){
// syntax:
multiset<string> mst;

// insert:
mst.insert("abc");
mst.insert("cde");
mst.insert("abc");
mst.insert("efg");
mst.insert("abc");

// erase and find:(using iterator)
// auto itr=mst.find("abc");
// if(itr!=mst.end()){
//     mst.erase(itr);
// }

// erase by element:
mst.erase("abc");

// print:
for(string str : mst){
    cout<<str<<" ";
}
}