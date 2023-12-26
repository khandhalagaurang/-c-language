#include<stdio.h>
int main(){
    int a[50],b[50],c[50],m,n,i,,j=0,total;
    printf("enter size of array 1:");
    scanf("%d",&m);

    printf("\n enter elements::");
    for ( i = 0; i < m; i++){
        scanf("%d",&a[i]);
    }
    
    printf("enter size of array 2:");
    scanf("%d",&n);

    printf("\n enter elements::");
    for ( i = 0; i < n; i++){
        scanf("%d",&b[i]);
    }
     total = m+n;
    for ( i = 0; i < m; i++)
    {
        c[i]=a[i];
    }
    for ( i = m ; i < total; i++)
    {
        c[i]=b[j];
        j++;
    }
    for ( i = 0; i < total; i++)
    {
       printf("%d",c[i]);
    }
    
    return 0;
}