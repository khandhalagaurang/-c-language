#include<stdio.h>
int main(){
    int a[40],i,n,sum=0;
    float avr;
    printf("enter array:");
    scanf("%d",&n);
    printf("\n enter elements::");
    for ( i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    printf("\n you have entered following elements \n");
    for ( i = 0; i < n; i++){
        sum=sum+a[i];
        printf("%d \n",a[i]);
    }
    avr=(float)sum/i;
     printf("\n addition of all elements are: %d",sum);
    printf("\n avarage of all elements are: %.2f",avr);
    
    return 0;
}