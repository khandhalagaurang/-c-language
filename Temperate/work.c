// print a to z
#include<stdio.h>
int main(){
    char ch='a';
    do
    {
      printf("%c \n",ch);
      ch++;
    } while (ch<='z');
    
    return 0;
}