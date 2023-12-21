// Check num is prime or not
#include <stdio.h>
int main(){
  int i = 1, n, count;
  printf("enter no : ");
  scanf("%d", &n);
  for ( i = 1; i < n; i++)
  {
    if (n%i==0)
    {
      count++;
    }
    
  }
  
  if (count <= 2){
    printf("\n it is prime number");
  }else{
    printf("it is not prime number");
  }
  return 0;
}