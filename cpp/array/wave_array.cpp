// Function to convert given array to wave like array
// arr: input array
// n: size of array
void convertToWave(int *arr, int n){

    // Your code here
    int i,j;
    for(i=0,j=i+1;i<n,j<n;i=i+2,j=i+1){
        swap(arr[i],arr[j]);
    }

}
