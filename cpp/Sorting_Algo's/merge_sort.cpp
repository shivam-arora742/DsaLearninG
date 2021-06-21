//merge sort: Divide & Conquer Sorting Algorithm.
//In this, divide the array in subparts and when it becomes smallest(1 element arr),start merging in sorted way.

//it includes 2 methods: merge_sort->for dividing the array into sub halves , merge->to join the sub halves in sorted way.

#include<iostream>
using namespace std;

//merge method:
void Merge(int arr[],int l,int mid,int r){
    //for merging we need 2 temporary arrays:

    //size of temporary arrays:
    int n1=mid-l+1;
    int n2=r-mid;

    //temporary arrays:
    int tmp1[n1];
    int tmp2[n2];

    for(int i=0;i<n1;i++){              //put values from l to mid in tmp1.
        tmp1[i]=arr[l+i];
    }

    for(int i=0;i<n2;i++){            //put values from mid+1 to r in tmp2.
        tmp2[i]=arr[mid+1+i];
    }


    //comparison between temporary array elements:
    int i=0,j=0,k=l;               //i will iterate over tmp1[], j will iterate over tmp2[], k will iterate over arr[]
    while(i<n1 && j<n2){
        if(tmp1[i]<tmp2[j]){
            arr[k]=tmp1[i];
            k++;i++;
        }
        else{
            arr[k]=tmp2[j];
            k++;j++;
        }
    }

    //for remaining values in tmp1 & tmp2;
    while(i<n1){
         arr[k]=tmp1[i];                            //for tmp1;
            k++;i++;
    }

    while(j<n2){
         arr[k]=tmp2[j];                          //for tmp2;
            k++;j++;
    }
}

//merge_sort method:
void Merge_Sort(int arr[],int l,int r){
if(l<r){                                   //repeat until we get single element in arr.
    int mid=(l+r)/2;                      //calculate mid.
    Merge_Sort(arr,l,mid);               //recursively call the Algo for sub halves:
    Merge_Sort(arr,mid+1,r);

    Merge(arr,l,mid,r);                // calling merge function for sorted order.
}
}



int main(){
int arr[]={6,3,9,5,2,8,7,1};

//original array:
cout<<"Original List:"<<endl;
for(int i=0;i<8;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
Merge_Sort(arr,0,7);

//output:
cout<<"\nMerge Sorted List:"<<endl;
for(int i=0;i<8;i++){
    cout<<arr[i]<<" ";
}
return 0;
}
