// check string is palindrome or not 
#include<stdio.h>
#include<string.h>
int main(){
     char str[20];
     int i, len, flag = 0;
     printf("enetr name:");
     gets(str);
     printf("name is:");
     puts(str);
      len = strlen(str);

    for (i = 0; i < len; i++) {
        if (str[i] != str[len - i - 1]) {
            flag = 1;
            break;
        }
    }
    if (flag){
        printf("%s is not palindrome", str);
    } else{
        printf("%s is palindrome", str);
    }      
    return 0;
}