#include<stdio.h>

    int main()
{
        int n,i;
           printf("Enter number of elements :");
           scanf("%d",&n);
           int a[n];
           printf("Enter elements : ");
           for(i=0;i<n;i++){
           scanf("%d",&a[i]);
           }
               for(i=0;i<n;i++){ 
               printf("Elements are : %d and its index is %d\n",a[i],i);
               }
    return 0;
}