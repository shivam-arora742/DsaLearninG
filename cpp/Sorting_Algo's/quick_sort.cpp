//Based on Divide and Conquer Technique and is in-place sorting method.
#include<iostream>
using namespace std;

void swap_elem(int arr[],int x,int y){
int tmp=arr[x];
arr[x]=arr[y];
arr[y]=tmp;
}

int partition_arr(int arr[],int l,int r ){
int pi=arr[r];                    //consider rightmost element as pivot
int i=l-1;                        //store last index where element smaller than pivot
for(int j=l;j<r;j++){          //traverse whole array till r-1;
    if(arr[j]<pi){               //if found smaller value swap it
        i++;
        swap_elem(arr,i,j);
    }
}
swap_elem(arr,i+1,r);        //swap pivot with i+1 to put it in correct position.
return i+1;                   //return pivot's correct index.
}

void quick_sort(int arr[],int l,int r){
if(l<r){                                        //base case l==r return;
    int pivot=partition_arr(arr,l,r);           //partition array based on pivot
    quick_sort(arr,l,pivot-1);
    quick_sort(arr,pivot+1,r);                 //apply quick sort on sub arrays recursively.
}
}

int main(){
int arr[5]={5,10,3,6,1};  //given array to be sorted.
quick_sort(arr,0,4);        //quick_sort () method with arr[],left and right indexes of arr[]
for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
}
return 0;
}
//Time Analysis:
//worst case:O(n^2)
// best case:O(n logn)
