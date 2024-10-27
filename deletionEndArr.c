#include<stdio.h>
    int main(){
    int arr[10],n,i;
    printf("Enter size of array : ");
    scanf("%d",&n);
    printf("Enter elements : ");
    for(i=0; i<n; i++){
    scanf("%d",&arr[i]);
    }
    n--;
    printf("Array after deletion of first element : ");
    for(i=0; i<n; i++){
    printf("%d\n",arr[i]);
    }
    return 0;
    }