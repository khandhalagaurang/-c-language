//first and last digit of a number.
#include<stdio.h>
int main(){
    int frist,n,count=0,sum=0,last,ans;
    printf("enter no:");
    scanf("%d",&n);
    last=n%10;
    while (n>0){
        frist=n%10;
        n=n/10;
        sum=sum+frist;
        count++;
    }
    ans=frist+last;
    printf("\n total digit = %d",count);
    printf("\n sum of digit= %d", sum);
    printf("\n sum of frist&last digit= %d",ans);
    return 0;
}