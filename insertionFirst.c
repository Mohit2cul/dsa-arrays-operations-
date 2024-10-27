#include<stdio.h>
    int main(){
    int arr[10],n,i,x;
    printf("Enter size of an array : ");
    scanf("%d",&n);
    printf("Enter elements : ");
    for(i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter element at beginning : ");
    scanf("%d",&x);
        for(i=n;i>0;i--){
            arr[i] = arr[i-1];
        }
            arr[0] = x;
            n++;
            printf("Array elements after insertion : ");
            for(i=0;i<n;i++){
            printf("%d",arr[i]);
            printf("\n");
            }
    return 0;
    }