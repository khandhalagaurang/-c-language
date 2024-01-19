// read a file and display its contents.
#include<stdio.h>
int main(){

    FILE *fptr;
    char name;
    fptr = fopen("text.txt","r");

    if (fptr==NULL){
        printf("file can't be opened \n");
    }

    name=fgetc(fptr);
    while (name != EOF){
       printf("%c",name);
       name=fgetc(fptr);
    }
 
    fclose(fptr);
return 0;
}