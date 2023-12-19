#include<stdio.h>
int main(){
  int in,out;
  printf("\n enter your choice");
  printf("\n press 1 for english.");
  printf("\n hindi ke liye 2 dabaye.");
  printf("\n gujrati mate 3 dabavo");
  scanf("\n %d",&in);

  switch(in){
    case 1: 
    printf("\n press 1 for recharge");
    printf("\n press 2 for help");
    printf("\n press 3 for exit");
    scanf("%d",&out);          

      switch(out){
        case 1:
             printf("\n recharge successfully");
              break;
         case 2:
             printf("\n we are happy to our help.!");
              break;
         case 3:
             printf("\n exit ok.");
              break;
          default :
              printf("\n invalid choice...");
              break;
        }
    break;

    case 2: 
    printf("\n recharge karne ke liye 1 dabaye");
    printf("\n sahayta lene karne ke liye 2 dabaye");
    printf("\n bahar nikal ne ke liye 3 dadbaye");
    scanf("\n enter your choice %d",&out);   

      switch(out){
        case 1:
         printf("\n aapka recharge safaltapurvak ho gaya. ");
        break;
        case 2:
         printf("\n aapko kya sahayta chahiye. ");
        break;

        case 3:
         printf("\n aap bahar nikal gaye ho. ");
        break;

        default :
      printf("\n invalid choice.");
      break;

      }
    break;

    case 3: 
    printf("\n recharge karva mate 1 dabavo.");
    printf("\n madad mate 2 dabavo.");
    printf("\n bar java mate 3 dabavo.");
    scanf("%d",&out);    
    // break;
      switch(out){
        case 1:
         printf("\n tamaru recharge safaltapurvak thai gayu.");
        break;

        case 2:
         printf("\n tamari madad prakrita purn thai.");
        break;

        case 3:
         printf("\n tame bahar aavi gaya cho.");
        break;

          default :
          printf("\n invalid choice.");
          break;
      }
    break;
  }

  return 0;
}