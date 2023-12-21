// print out Fibonacci series.
#include<stdio.h>
int main(){
    int i=1,n,f=0,s=1,t;
    printf("enter no :");
    scanf("%d",&n);
      while(i<=n){
        printf(" \n %d",f);
        t=f+s;
        f=s;
        s=t;
        i++;
    }  
    return 0;
}