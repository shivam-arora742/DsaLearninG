#include<stdio.h>
#include<conio.h>

void shell_sort(int arr[],int n){
for(int gap=n/2;gap>=1;gap/=2){
    for(int j=gap;j<n;j++){
        for(int i=j-gap;i>=0;i-=gap){
            if(arr[i+gap]>arr[i]){
                break;
            }
            else {
                int temp=arr[i+gap];
                arr[i+gap]=arr[i];
                arr[i]=temp;
            }
        }
    }
}

}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    shell_sort(arr, n);
     printf("after shell sort\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
return 0;
}
