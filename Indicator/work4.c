//  find length of string using pointer
#include <stdio.h>
#include <string.h>

int main() {

    char str[100],*ptr;
    int count=0;
     printf("enetr name:");
     gets(str);
     printf("name is:");
     puts(str);
      ptr = str;
    while ( *ptr != '\0') {
        count++;
        ptr++;
    }
    printf(" length of the string is: %d", count);

    return 0;

}