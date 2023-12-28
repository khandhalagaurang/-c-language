// average of 2D array.
#include<stdio.h>
int main(){
    int a[20][20],i,j,m,n,sum=0;
    float avg;
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
    printf("\n matrix... \n");
     for ( i = 0; i < m; i++)
    {
       for ( j = 0; j < n; j++)
       {
       printf("%d",a[i][j] );
       sum=sum+a[i][j];
       } 
       printf("\n");
    }
    avg=(float)sum/(m*n);

     printf("\n sum of  all elements= %d",sum);
     printf("\n average of  all elements= %.2f",avg);


    
    return 0;
}