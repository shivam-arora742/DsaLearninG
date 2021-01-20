#include<stdio.h>
#include<conio.h>

void Select_sort(int A[],int n){
for(int i=0;i<(n-1);i++){
    int min=i;
    for(int j=i+1;j<n;j++){
        if(A[j]<A[min]){
            min=j;
        }
    }
    int temp =A[i];
    A[i]=A[min];
    A[min]=temp;
}
}

int main(){
    int n;
    scanf("%d",&n);
int A[n];
for(int i=0;i<n;i++){
    scanf("%d",&A[i]);
}
Select_sort(A,n);
printf("Selection Sorted LIst:\n");
for(int i=0;i<n;i++){
    printf(" %d ",A[i]);
}
return 0;
}
