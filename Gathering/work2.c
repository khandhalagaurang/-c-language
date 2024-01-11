// Sum of all Array Elements by passing array as an argument using User Define Functions
#include<stdio.h>
int sum_element(int n);
int sum_element( int n){
    int a[n],i; 
    for ( i = 0; i < n; ++i){
        scanf("%d",&a[i]);
    }
    int sum=0;
    for ( i = 0; i < n; i++){
            sum = sum +a[i];
    }
    return sum;
}
int main(){
   int new_sum=0,n,i;
   printf("enter size of array : ");
    scanf("%d",&n);
    new_sum=sum_element(n);
    printf("sum of array element %d",new_sum);
    
    return 0;
}
