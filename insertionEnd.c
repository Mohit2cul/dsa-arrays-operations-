#include<stdio.h>
    int main(){
    int arr[10],n,i,x;
    printf("Enter size of array : ");
    scanf("%d",&n);
    printf("\nEnter elements : ");
        for(i=0; i<n; i++){
            scanf("%d",&arr[i]);
    }
    printf("\nEnter the element to insert at the end : ");
    scanf("%d",&x);
    arr[i] = x;
    n++;
        for(i=0; i<n; i++){
            printf("\nElements after insertion : %d\n",arr[i]);
    }
    return 0;
    }