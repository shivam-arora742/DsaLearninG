
class Solution{
  public:
    string missingPanagram(string str){

     //Your code here
     int n=str.length();   //string length
     bool mark[26]={false};  //to validate the character visited in string str.
     for(int i=0;i<n;i++){
         if(str[i]>='a' &&str[i]<='z'){          //for lower case
             mark[str[i]-'a']=true;           //if string character present ,mark the index as true.
         }
         else if(str[i]>='A' &&str[i]<='Z'){    //for upper case
             mark[str[i]-'A']=true;
         }
     }
     string result="";         //to store output.
     for(int i=0;i<26;i++){
         if(mark[i]==false){       //if any index ==false,add in output result.
             result+=char(i+'a');
         }
     }
     if(result==""){               //check if there is no missing char ,return -1 as string.
         return "-1";
     }
     return result;                      //return output.
}
};
//execution time:0.24s

