#include<stdio.h>>
int main(){
    int p,q,r;
    printf("enter p,q,r");
    scanf("%d %d %d",&p,&q,&r);
    (p>q)?(p>r)?printf("p is maximum"):printf("r is maximun"):(q>r)?printf("q is maximum"):printf("r is maximum");
    return 0;
}