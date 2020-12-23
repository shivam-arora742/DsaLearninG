//approach: swap first(i) & last element(j) & will increment i& j

class Solution {
public:
    void reverseString(vector<char>& s) {
        int i;
        int j = s.size()-1;
        for(i = 0 ;i <j ;i++)
        {
            swap(s[i],s[j]);
            j--;
        }
    }
};
