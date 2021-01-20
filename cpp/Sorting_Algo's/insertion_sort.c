#include<stdio.h>
#include<conio.h>

void insert_sort(int A[],int n){
for(int i=1;i<n;i++){
    int value=A[i];
    int hole=i;
    while(hole>0 && A[hole-1]>value){
        A[hole]=A[hole-1];
        hole=hole-1;
    }
    A[hole]=value;
}
}

int main(){
    int n;
    scanf("%d",&n);
int A[n];
for(int i=0;i<n;i++){
    scanf("%d",&A[i]);
}
insert_sort(A,n);
printf("Insertion Sorted LIst:\n");
for(int i=0;i<n;i++){
    printf(" %d ",A[i]);
}
return 0;
}
