#include<stdio.h>
int main(){
    
    int a,b,c,d,e;
    printf("enter value a,b,c,d,e");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);

    if(a<b){
        if(a<c){
            if(a<d){
                if(a<e){
                    printf("\n a is minimum");
                }else{
                    printf("\n e is minimum");
                }
            }else{
                if(d<e){
                    printf("\n d is minimum");
                } else{
                    printf("\n e is minimum");
                }
            }
        } else{
            if (c<d){
                if(c<e){
                    printf("/n c is minimum");
                } else{
                    printf("/n e is minimum");
                }
            }
            else{
                if (d<e) {
                     printf("/n d is minimum");
                }
                else{
                     printf("/n e is minimum");
                }
                
            }
        }
    }else{
        if (b<c){
            if(b<d){
                if (b<e){
                    printf("/n b is minimum");
                }else{
                    printf("/n e is minimum");
                }
            }else{
                if (d<e) { 
                     printf("/n d is minimum");
                }else{
                     printf("/n e is minimum");
                }
            }
       
        } else{   
            if (c<d){
                if (c<e){
                printf("/n c is minimum");
                } else{
                printf("/n e is minimum"); 
                }  
            }else{
                if (d<e){
                    printf("/n d is minimum");
                } else{
                    printf("/n e is minimum");
                } 
            }
        }
    }
    return 0;
}