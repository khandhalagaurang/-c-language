// append data into a file.
#include <stdio.h>
#include <string.h>
int main()
{
   FILE *fp;
   char str[80];
 
   fp = fopen("data.txt", "a");
 
   printf("Enter your message:");
   gets(str);
 
   fprintf(fp, "%s",str);
 
   printf("Your message is appended in data.txt file.");
   fclose(fp);

return 0;
}