
//Approach-1: convert x& y to binary bit and check it they both are different, result++;
class Solution {
public:
    int hammingDistance(int x, int y) {
        int result=0;
        while(x!=0 || y!=0){
            if(x%2!=y%2)result++;
            x=x/2;
            y=y/2;
        }
        return result;
    }
};

//Approach-2: using z=x^y and then calculating no of 1's in z
class Solution {
public:
    int hammingDistance(int x, int y) {
        int res=0;
        int z=x^y;
        while(z){
            if(z%2==1)res++;
            z=z/2;
        }
        return res;
    }
};
