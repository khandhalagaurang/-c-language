// find leap year 2000-3000
#include <stdio.h>
int main(){
     for ( int i=2000;i<=3000; i++)
     {
      if (i%4==0){
              printf("%d \n",i);        
        }
     }
     
     
    return 0;
}