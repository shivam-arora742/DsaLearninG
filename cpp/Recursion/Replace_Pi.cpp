#include<iostream>
#include<string.h>
using namespace std;

void replacePi(string s){
if(s.length()==0){    //base case
    return ;
}
//recursive case
if(s[0]=='p'&&s[1]=='i'){
    cout<<" 3.14 ";      //replace pi=3.14
    replacePi(s.substr(2));
}
else {
    cout<<s[0];       //print 0th element of string
    replacePi(s.substr(1));
}

}

int main(){
replacePi("pippxxppiixipi");
return 0;
}
