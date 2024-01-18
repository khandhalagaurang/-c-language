// swap two numbers using pointers
#include<stdio.h>                  
void swap(int *x , int *y);
void main(){
    int a,b;
    printf("enter two num ");
    scanf("%d %d",&a,&b);

    printf("\n a is  %d",a);
    printf("\n b is  %d \n",b);

    swap(&a,&b);
    
    printf("\n after swaping");
    printf("\n a is = %d",a);
    printf("\n b is = %d",b);
}
void swap(int *x , int *y){
    int z;
    z=*x;
    *x=*y;
    *y=z;
}
