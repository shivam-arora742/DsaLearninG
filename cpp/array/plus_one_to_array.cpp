class Solution {
public:
vector plusOne(vector& digits) {
int n=digits.size();
int carry=0;
int i=n-1;
while(i>=0){
if(digits[i]>=9){
digits[i]=0;
carry+=1;
}
else if(digits[i]<9){
digits[i]+=1;
carry=0;
break;
}
i--;
}
if(carry>=1){
digits.insert( digits.begin(),1);
}
return digits;
}
};
