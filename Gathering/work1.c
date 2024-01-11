// find factorial of number using recursion.
#include<stdio.h>                  
void display(int a){            
    if (a<=5){
       printf("%d \n",a);
       display(a+1);
    }
    
}
int sum(int a){                 
    if (a<=5){
       return a*sum(a+1);
    } else{
        return 1;
    }
}

void main(){
    int i=1;
    display(i);
    printf("\n factorial of %d",sum(i));
}