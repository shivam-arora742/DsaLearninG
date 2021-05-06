//lEETCODE-STRING-PROBLEM: RANSOM_NOTE.

//Problem Statement:
//Given two stings ransomNote and magazine, return true if ransomNote can be constructed from magazine and false otherwise.
//Each letter in magazine can only be used once in ransomNote.

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

        int n=magazine.size();      //size of string magazine
        int m=ransomNote.size();    //size of string ransomNote

        int ran[26]={0};            //to determine the characters in string ransomNote.
        int mag[26]={0};            //to determine the characters in string magazine.

        //Iterate both strings and find out the occurance of each char.
        for(int i=0;i<n;i++){
            mag[magazine[i]-'a']++;
        }
        for(int i=0;i<m;i++){
            ran[ransomNote[i]-'a']++;
        }

        //check if the count of characters ransomNote != magazine ,return false
        for(int i=0;i<26;i++){
            if(ran[i]>mag[i]){
                return false;
            }
        }
        //else return true.
        return true;
    }
};
//memory usage:8.7 mb (80.59% less)
//runtime:4ms (100%faster)
