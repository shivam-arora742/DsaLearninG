//LEETCODE: First Unique Character in a String:

/*
Given a string s, find the first non-repeating character in it and return its index. If it does not exist, return -1.

Example 1:

Input: s = "leetcode"
Output: 0
*/

class Solution {
public:
    int firstUniqChar(string s) {
       //map to count occurance of each char in string:
        unordered_map<char,int> occurance;

        //increment count for each character:
        for(int i=0;i<s.size();i++){
            occurance[s[i]]++;
        }

        //check for first unique in map :
         for(int i=0;i<s.size();i++){
            if(occurance[s[i]]==1){
                return i;
            }
        }
        //if doesnt found , return -1;
        return -1;
    }
};

//Runtime: 44 ms
//Memory Usage: 10.7 MB, less than 65.50% of C++ online submissions
