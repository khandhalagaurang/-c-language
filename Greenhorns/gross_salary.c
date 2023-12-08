#include<stdio.h>
 int main(){
    int salary,hra,da,ta,grosssalary;
    printf(" enter salary :");
    scanf("%d",&salary);
    hra=salary*10/100;
    da=salary*5/100;
    ta=salary*8/100;
    grosssalary=salary+hra+da+ta;
    
    printf(" \n enter salary :%d",salary);
    printf(" \n hra :%d",hra);
    printf(" \n da :%d",da);
    printf(" \n ta :%d",ta);
    printf(" \n gross salary :%d",grosssalary);


   
    return 0;
 }