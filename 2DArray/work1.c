// print 2D array of N elements.
#include<stdio.h>
int main(){
    int a[20][20],i,j,m,n;
    printf("enter size of row and colume::");
    scanf("%d %d",&m,&n);

    printf("enter elements:");
    for ( i = 0; i < m; i++)
    {
       for ( j = 0; j < n; j++)
       {
       scanf("%d",&a[i][j] );
       } 
    }
    printf("\n mentrix... \n");
     for ( i = 0; i < m; i++){
       for ( j = 0; j < n; j++){
       printf("%d ",a[i][j] ); 
       } 
       printf("\n");
    }
    
    return 0;
}