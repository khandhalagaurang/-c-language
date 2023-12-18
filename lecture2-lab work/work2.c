#include<stdio.h>>
int main(){
    int a,b,c;
    printf("enter a,b,c");
    scanf("%d %d %d",&a,&b,&c);

    if (a<b){
            if(a<c){
            printf("a is minimum");
        }
            else{
            printf("c is mainimum");
        }
    }
    else{
            if(b<c){
            printf("b is minimum");
        }
            else{
            printf("c is minimum");
        }
           
    }
    
    return 0;
}