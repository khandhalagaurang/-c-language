#include<stdio.h>
int main(){
    int a,b,c;
    printf("\n enter a and b");
    scanf("%d %d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("\n  swapping %d",a);
    printf("\n  swapping %d",b);
    return 0;
}