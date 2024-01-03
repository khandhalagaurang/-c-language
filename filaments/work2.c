// check whether a string is palindrome or not.
//1.strlen 2.strupr 3.strlwr 4.strrev 5.strcpy 6.strcat 7.strcmp
#include<stdio.h>
#include<string.h>
int main(){
     char str[20],str2[20];
     printf("enetr name:");
     gets(str);
     printf("name is:");
     puts(str);

     printf("enetr name 2:");
     gets(str2);

    
     printf("\n upper of string is %s",strupr(str));
     printf("\n length of string is %d",strlen(str));
     printf("\n lower of string is %s",strlwr(str));

     printf("\n after string compare: %d",strcmp(str,str2));
      
     strcat(str,"khandhala");
     printf("\n after marge string is %s",str);

     strcpy(str,"gk");
     printf("\n after copy name is %s",str);

     printf("\n reverse of string is %s",strrev(str));



    return 0;
}