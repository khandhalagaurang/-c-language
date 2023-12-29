// Insert, Delete & Update operations the element into array.
#include<stdio.h>
int main(){
    int a[40],i,n,newval,posi;
    printf("enter array:");
    scanf("%d",&n);
    printf("\n enter elements::");
    for ( i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    printf("\n old elements \n");
    for ( i = 0; i < n; i++){
        printf("%d  ",a[i]);
    }

     printf("\n enter a new value:");
     scanf("%d",&newval);
     a[n]=newval;
     n++;

    printf("\n after insert array elements:");
    for ( i = 0; i < n; i++){
    printf("%d ",a[i]);
    }

    n--;
    printf("\n after delete array elements:");
    for ( i = 0; i < n; i++){
    printf("%d ",a[i]);
    }

    printf("\n enter a position:");
    scanf("%d",&posi);

    printf("\n enter a new value:");
    scanf("%d",&newval);

    for ( i = 0; i < n; i++){
       if (i==posi){
          a[i]=newval;
        }
    }

    printf("\n after update  array elements:");
    for ( i = 0; i < n; i++){
    printf("%d ",a[i]);
    }
    
    return 0;
}