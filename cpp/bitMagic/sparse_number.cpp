// function to check if the number is sparse
// n : is the number to check if it is sparse

Approach-1:

bool isSparse(int n){
    int prev_Bit=0,                 //to store previous bit
    int cnt=0;                      //to check if any consecutive setbit
    int presnt_Bit=0;               //to store present bit
    while(n>0){                     //iterate untill number >0
        presnt_Bit=n%2;
        if(presnt_Bit==1 &&prev_Bit==1){        //if present bit==previous bit==1
            cnt++;                              //there are consecutive set bits
        }
        prev_Bit=presnt_Bit;                    //previous bit ==present bit
        n=n/2;                                 //number /=2;
    }
    if(cnt>=1){                               //if any consecutive set bit return not sparse
        return false;
    }
    return true;                                 //else return yes it is sparse
}
//Execution Time:0.17s
----------------------------------------------------------------------------------------------
Approach-2:

bool isSparse(int n){
    if(n&(n>>1)){
        return false;
    }
    return  true;
}
//Execution Time:0.16s
