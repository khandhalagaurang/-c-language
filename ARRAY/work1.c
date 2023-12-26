#include<stdio.h>
int main(){
    int a[40],i,n;
    printf("enter array:");
    scanf("%d",&n);
    printf("\n enter elements::");
    for ( i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    printf("\n you have entered following elements \n");
    for ( i = 0; i < n; i++){
        printf("%d \n",a[i]);
    }
    
    return 0;
}