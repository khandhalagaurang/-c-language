#include <stdio.h> 
int main(){
    int n,i, rev=0,sum=0;
    printf("Enter a Number \n");
    scanf("%d",&n);  
    i = n;
    //value=1729
    //Calculating Sum of digits
    while(i > 0){
        sum += i % 10;  
        i = i / 10;      
    } //sum=19
    printf(" \n sum is %d",sum);
    i = sum; //sum=19=i
     while( i > 0){
        rev = rev*10 + i % 10; 
        i = i / 10;
    } //i=19,rev=91
    printf(" \n reverse no is %d",rev);
    if(rev*sum == n) //rev=91*sum=17
        printf("\n it is Magic Number \n");
    else
        printf("\n it is Not  Magic Number \n");
 
    return 0;
}