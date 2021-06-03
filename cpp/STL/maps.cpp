//map store key,value pair
//in map,elements are sorted in the order of key.

#include<iostream>
#include<map>     //to include map
#include<string>  //to use string
using namespace std;

int main(){

//map to store student's marks & name;
map<string ,int> studentMap;    //map syntax
studentMap["shivam"]=100;        //node-1
studentMap["vijay"]=90;          //node-2
studentMap["anuj"]=0;            //node-3

studentMap.insert({"shubham",200});   //to insert node

//printing using iterator
map<string ,int>::iterator itr;
for(itr=studentMap.begin();itr!=studentMap.end();itr++){
    cout<<(*itr).first<<"  "<<(*itr).second<<endl;    //itr.first->key && itr.second->value;
}
//find method:
auto it=studentMap.find("shivam");
cout<<"find:"<<(*it).first<<" "<<(*it).second<<endl;

//erase method:
studentMap.erase("anuj");

//clear function :
//studentMap.clear();

//another way of printing:
for(auto &pairr : studentMap){   //pairr->points to each pair .
    cout<<pairr.first<<" "<<pairr.second<<endl;
}

cout<<"size:"<<studentMap.size()<<endl;
cout<<"maximum size:"<<studentMap.max_size()<<endl;
cout<<"is empty :"<<studentMap.empty()<<endl;
cout<<endl;


//to calculate frequence of characters in a string;
map<char ,int > A;
string a="hello worldd!!!";
for(char c:a ){
    A[c]++;
}
cout<<"!:"<<A['!']<<" "<<"d:"<<A['d']<<endl;
cout<<endl;

//to count no of 1's &0's in a binary string
map<char,int >s;
string  q="10101010101010";
for(char x:q){
    s[x]++;
}
cout<<"1:"<<s['1']<<" "<<"0:"<<s['0']<<endl;
cout<<endl;


//Map Exercise:GIVEN N STRINGS PRINT UNIQUE STRINGS IN LEXOGRAPHIC ORDER & THEIR FREQUENCY:
map<string,int>Dictionary;

int n;    //for number of strings:
cin>>n;

//iterate each string and store the string and frequency in map;
for(int i=0;i<n;i++){
    string s;
    cin>>s;
    Dictionary[s]++;
}

//print map:
for(auto itr:Dictionary){
    cout<<itr.first<<" "<<itr.second<<endl;
}

return 0;
}
