// check string is palindrome or not 
#include<stdio.h>
#include<string.h>
int main(){
     char str[20],str2[20];
     int ans;
     printf("enetr name:");
     gets(str);
     strcpy(str2,str);
     printf("\n name is %s",str);
     printf("\n name2 is %s",str2);
     strrev(str);
     printf("\n reverse name is %s",str);
     ans=strcmp(str,str2);
     if (ans==0)
     {
        printf("\n it is palingdrome");
     }else
     {
        printf("\n it is not palindrome");
     }
     
     
    return 0;
}
