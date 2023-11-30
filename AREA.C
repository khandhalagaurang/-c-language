#include<stdio.h>
#include<conio.h>
#define pi 3.14
#define s 0.7
void main(){
  float r,b,l;
   clrscr ();
   printf("Enter a value r,b,l");
   scanf("%f %f %f",&r,&b,&l);

   printf("\n Area of circle is %.2f",pi*r*r);
   printf("\n Area of squre is %.2f",r*r);
   printf("\n Area of rectangle is %.2f",r*b);
   printf("\n Area of triangle is %.2f",s*b/0.5);
   printf("\n simple intrest is %.2f",r*b*l/100);
   printf("\n perimeter of circle is %.2f",2*pi*r);
   getch();
}