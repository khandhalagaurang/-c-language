// create infinite calc using UDF, switch case and Loop.
#include<stdio.h>                  
float sum(float a ,float b){
    return a+b;
}
float subtract(float a ,float b){
    return a-b;
}
float multiply(float a ,float b){
    return a*b;
}
float divide(float a ,float b){
    return a/b;
}

int main(){
    float num1,num2,result;
    char ch;

    while (1){
        printf("enter operator +,-,*,/ or 'q'for quit : \n");
        fflush(stdin);
        scanf("%c",&ch);

        if (ch=='q'){
            printf("exit the calculator.\n");
             break; 
        } 
        printf("enter two number : \n");
        scanf("%f %f",&num1,&num2);
        
    switch (ch){
    case '+':
            result = sum(num1,num2);
            printf("sum is : %.2f \n",result);
            break;
    case '-':
            result = subtract(num1,num2);
            printf("subtract is : %.2f \n",result);
            break;
    case '*':
            result = multiply(num1,num2);
            printf("multiply is : %.2f \n",result);
            break;
    case '/':
            result = divide(num1,num2);
            printf("divide is : %.2f \n",result);
            break;
    
    default:
    printf("invelide operatore entered : ");
        break;
    }

    }
    
    return 0;
}