//User function Template for C++

// Function to find number of bits needed to be flipped to convert A to B
int countBitsFlip(int a, int b){

    // Your logic here
    int res=(a^b);    //xor of a&b will give the different bits
    int bits=0;       //to calculate set bit of result;
    while(res>0){
        res=(res&(res-1));    //count no of set bits in result
        bits++;
    }
    return bits;
}
//GFG BIT MAGIC Question
//execution time:0.18s
