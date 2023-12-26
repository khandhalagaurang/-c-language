#include<stdio.h>
int main(){
    int a[40],i,n,count=0;
    printf("enter array:");
    scanf("%d",&n);
    printf("\n enter elements::");
    for ( i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    for ( i = 0; i < n; i++){
        count++;
    }
    printf("count is %d",count);
    
    return 0;
}