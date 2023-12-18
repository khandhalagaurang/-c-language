#include<stdio.h>
int main(){
    int a,b,c,d,e;
    printf("enter a&b&c&d&e :");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);

    (a>b)?(a>c)?(a>d)?(a>e)?printf("a is maximum"):printf("e is maximum"):(d>e)?printf("d is maximum"):printf("e is maximum"):(c>d)?(c>e)?printf("c is maximum"):printf("e is maximum"):(d>e)?printf("d is maximum"):printf("e is maximum"):(b>c)?(b>d)?(b>e)?printf("b is maximum"):printf("e is maximum"):(d>e)?printf("d is maximum"):printf("e is maximum"):(c>d)?(c>e)?printf("c is maximum"):printf("e is maximum"):(d>e)?printf("d is maximum"):printf("e is maximum");

    return 0;
}