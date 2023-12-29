// find  largest number in array
#include<stdio.h>
int main(){
    int a[40],i,n,largest;
    printf("enter array:");
    scanf("%d",&n);
    printf("\n enter elements::");
    for ( i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    largest = a[0];

    for(i = 1; i < n; i++) {
      if( largest < a[i] ) 
         largest = a[i];
   }
   printf("argest number of array %d",largest);

    
    
    return 0;
}