// add two distances in inch-feet using structure. The values of the distances is to be taken from the user
#include <stdio.h>

struct Distance {
   int feet;
   float inch;
} d1, d2, sum;

int main() {
   printf("Enter 1st distance\n");
   printf("Enter feet: ");
   scanf("%d", &d1.feet);
   printf("Enter inch: ");
   scanf("%f", &d1.inch);
 
   printf("\nEnter 2nd distance\n");
   printf("Enter feet: ");
   scanf("%d", &d2.feet);
   printf("Enter inch: ");
   scanf("%f", &d2.inch);

   sum.feet = d1.feet + d2.feet;
   sum.inch = d1.inch + d2.inch;
   
   while (sum.inch >= 12.0) {
      sum.inch = sum.inch - 12.0;
      ++sum.feet;
   }
     printf("The Sum is %d feet, %.1f inches\n", sum.feet, sum.inch);
   return 0;
}