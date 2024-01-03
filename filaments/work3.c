// Wap to replace a character in string
#include<stdio.h>
#include<string.h>
int main(){
     char str[20],replace,new;
     int i;
     printf("enetr name:");
     gets(str);
     printf("your name is:");
     puts(str);

     printf("\n enter char you went to replace");
     fflush(stdin);
     scanf("%c",&replace);

     printf("\n enter new char you went to add");
     fflush(stdin);
     scanf("%c",&new);

     for ( i = 0;str[i]!='\0'; i++)
     {
       if (str[i]==replace){
        str[i]=new;
       } 
     }
     printf("\n after  replace name is .....");
     puts(str);

    return 0;
}