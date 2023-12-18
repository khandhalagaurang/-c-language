#include<stdio.h>
int main(){
    char ch;
    printf("enter a day");
    scanf("%c",&ch);
    
    switch (ch){
    case 's':
             printf("Sunday");
            break;
    case 'm':
            printf("Monday");
            break;
    case 't':
            printf("Tuesday");
            break;
    case 'w':
            printf("Wednesday");
            break;
    case 'T':
            printf("Thursday");
            break;
    case 'f':
            printf("Friday");
            break;
    case 'S':
            printf("Saturday");
            break;
    default:
            printf("not valid day");
        break;
    }

    return 0;
}