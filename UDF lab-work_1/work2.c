// if a given nunmber is divisible by 3 & 5 both or not using UDF.
#include <stdio.h>
void disvisible(int n){
      if (n%3 == 0 && n%5 == 0){
        printf("\n number is divisible by 3 & 5 ");
    } else{
        printf("\n number is not divisible by 3 & 5 ");
    }
}
void main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    disvisible(n);
}