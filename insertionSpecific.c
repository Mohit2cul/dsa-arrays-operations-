#include<stdio.h>
    int main(){
    int arr[10],n,loc,x,i;
    printf("Enter size of an array : ");
    scanf("%d",&n);
    printf("\nEnter elements : ");
    for(i = 0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    printf("\nEnter location at which you can enter the element : ");
    scanf("%d",&loc);
    printf("\nEnter element to enter : ");
    scanf("%d",&x);
        for(i=n-1;i>=loc-1;i--){
        arr[i+1] = arr[i];
        }
        arr[loc-1] = x;
        n++;
        
        for(i=0;i<n;i++){
            printf("\nElements after insertion : %d\n",arr[i]);
            
        }
        //printf("\n");
        return 0;
        }