// count number of digits in a number.
#include<stdio.h>
int main(){
    int r,n,count=0,sum=0;
    printf("enter no:");
    scanf("%d",&n);
    while (n>0){
        r=n%10;
        n=n/10;
        sum=sum+r;
        count++;
    }
    printf("\n total digit = %d",count);
    printf("\n sum of digit= %d", sum);
    
   
    
    return 0;
}