// Leetcode-Greedy-Easy- "DI String Match":

/*

A permutation perm of n + 1 integers of all the integers in the range [0, n] can be represented as a string s of length n where:

s[i] == 'I' if perm[i] < perm[i + 1], and
s[i] == 'D' if perm[i] > perm[i + 1].
Given a string s, reconstruct the permutation perm and return it. If there are multiple valid permutations perm, return any of them.

 

Example 1:

Input: s = "IDID"
Output: [0,4,1,3,2]
Example 2:

Input: s = "III"
Output: [0,1,2,3]
Example 3:

Input: s = "DDI"
Output: [3,2,0,1]
 

Constraints:

1 <= s.length <= 105
s[i] is either 'I' or 'D'.
 */

// Code & APproach:
class Solution {
public:
    vector<int> diStringMatch(string s) {
//        n denotes string size()
        int n=s.size();
//         vector to store permutation 
        vector<int> res;
//         two pointers - low & high
        int low=0,high=n;
//         iterate from 0 to n (inclusive):
        for(int i=0;i<n+1;i++){
//             when encounter I- add low & increment it:
            if(s[i]=='I'){
                res.push_back(low++);
            }
//            for other cases - add high to res & decrement it: 
            else{
                res.push_back(high--);
            }
        }
//         return resulant:
        return res;
    }
};

// TIme : 0ms (100 % faster)
// memory:9mb