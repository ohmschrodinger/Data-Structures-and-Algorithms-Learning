#include <stdio.h>

void bubblesort(int arr[],int n){
    int i,j,temp;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

}
int main(){
    int arr[5] = {5,4,3,2,1};
    // printf("Enter the elements of an array");
    // for(int i=0;i<5;i++){
    //     scanf("%d",&arr[i]);
    // }
    bubblesort(arr,5);
    
    printf("Sorted array:");
    for(int i=0;i<5;i++){
        printf("%d",arr[i]);
    }
}