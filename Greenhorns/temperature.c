#include<stdio.h>
int main(){
    float c,f;
    printf("Enter temperature in Celsius");
    scanf("%f", &c);
    f=(c*9/5)+32;
    printf(" Celsius = Fahrenheit. %.2f ",f);
    return 0;
}