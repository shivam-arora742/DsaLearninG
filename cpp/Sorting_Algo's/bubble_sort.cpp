#include<stdio.h>
#include<conio.h>

int main(){
int i,n,j,temp;
printf("enter length of array:\n");
scanf("%d",&n);
int arr[n];
printf("enter array:\n");
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
}
for(i=0;i<n;i++){

    for(j=i+1;j<n;j++){
        if(arr[j]<arr[i]){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
}
printf("ascending buble sort:\n");
for(i=0;i<n;i++){
    printf("%d",arr[i]);
    printf("\n");
}
return 0;
}
