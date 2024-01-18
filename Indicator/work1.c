// swap two numbers using pointers
#include<stdio.h>                  
void main(){
    int a,b,c,*ptr1,*ptr2;
    
    printf("enter two number : ");
    scanf("%d %d",&a,&b);

    printf("\n a is  %d",a);
    printf("\n b is  %d \n",b);

    ptr1 = &a;
    ptr2 = &b;

     c = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = c ;

    
    printf("\n after swaping number :");
    printf("\n a is = %d",a);
    printf("\n b is = %d",b);
}
