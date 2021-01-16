class Solution {
public:
string addBinary(string a, string b) {
int i=a.size()-1; ** //for exact length of string 'a'**
int j=b.size()-1; ** //for exact length of string 'b'**
int carry=0; ** // to maintain carry**
string res=""; ** //resultant string**
while(i>=0 || j>=0){
int temp_a=i>=0?a[i]-'0':0; ** //we process each char of both strings a&b**
int temp_b=j>=0?b[j]-'0':0;
int result=temp_a+temp_b+carry; ** //to add char a&b wid carry**
if(result>1){ //if we have previous stage carry
res=res+to_string(result%2);
carry=result/2;
}
else{ ** //normalise condition**
res=res+to_string(result);
carry=0;
}
i--;
j--;
}
if(carry==1){ ** //for carry at last iteration left(if any)**
res=res+to_string(carry);
}
reverse(res.begin(),res.end()); ** //reverse resultant string;**
return res;
}
};
//:-)happy coding guys!!!!
