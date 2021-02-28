class Solution{
public:
    //Function to reverse every sub-array group of size k.
    void reverseInGroups(vector<long long>& arr, int n, int k){
        // code here
        int start,end;
       for(int i=0;i<n;i=i+k){          //traverse array & divide it into sub-group
           start=i;                     //start=first element in sub-group
           end=(i+k-1)<(n-1)?(i+k-1):(n -1);    //end=min(i+k-1,n-1);
           while(end>=start){
               int temp=arr[start];              //swap first & last element in sub-group
               arr[start]=arr[end];
               arr[end]=temp;
               start++;
               end--;
           }
       }
    }
    //Execution Time:0.55s
};
