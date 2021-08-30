// GFG - Strings- Medium: Validate an IP Address

/*
Write a program to Validate an IPv4 Address. According to Wikipedia, IPv4 addresses are canonically represented in dot-decimal notation, which consists of four decimal numbers, each ranging from 0 to 255, separated by dots, e.g., 172.16.254.1 . The generalized form of an IPv4 address is (0-255).(0-255).(0-255).(0-255). Here we are considering numbers only from 0 to 255 and any additional leading zeroes will be considered invalid.

Your task is  to complete the function isValid which returns 1 if the ip address is valid else returns 0. The function takes a string s as its only argument .

Example 1:

Input:
ip = 222.111.111.111
Output: 1
*/

// Code:
class Solution {
    public:
        int isValid(string s) {
            // check for 4 cells by counting dots:
            int dots=0;
            int len=s.size();
            for(int i=0;i<len;i++){
                if(s[i]=='.')dots++;
            }
            if(dots!=3)return 0;
            
            // check for range of digits in each cell:
             //storing all ranges in string format into set:
             unordered_set<string> st;
             for(int i=0;i<256;i++){
                 st.insert(to_string(i));
             }
             
             string token="";
             int cells=0;
             
                // now check for each token lies in range(0-255):
             for(int i=0;i<len;i++){
                 if(s[i]!='.'){
                     token+=s[i];
                 }
                 else{
                     if(st.count(token)!=0)cells++;
                     token="";
                 }
             }
             
             if(st.count(token)!=0)cells++;
             if(cells==4)return 1;
             else return 0;
        }
};
