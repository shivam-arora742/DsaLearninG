#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool anagram(string a,string b){
    int i;
sort(a.begin(), a.end());
sort(b.begin(), b.end());
if(a.length()!=b.length()){
return false;
}
for(i=0;i<a.length();i++){
if(a[i]!=b[i]){
return false;
}
}
return true;
}

int main(){
string a,b;
cin>>a;
cin>>b;
anagram(a,b);
if(anagram(a,b)==true){
cout<<"YES";
}
else {
cout<<"NO";
}
return 0;
}
