#include<stdio.h>
int main(){
    int a,b;
    printf("enter a value a&b");
    scanf("%d %d",&a,&b);
    if (a<b){
        printf("\n a is minimum");
    }else{
        printf("\n b is minimum");
    }
    
    return 0;
}