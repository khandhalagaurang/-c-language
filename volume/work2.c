// 5 students in Chemistry, Mathematics and Physics (each out of 100) using a Union named Marks having elements roll no., name, chem_marks, maths_marks and phy_marks and then display the percentage of each student.
#include<stdio.h>
struct marks{
    int roll_no;
    char name[20];
    float Chemistry, Mathematics , Physics;
}mark[5];

int main(){
    int n,i;
    float Total;
    printf("enter Student = ");  
    scanf("%d",&n);

    for ( i = 0; i < n; i++){
        printf("Student %d\n",i+1);
        printf("enter roll_no = \n");
        scanf("%d",&mark[i].roll_no);
        printf("enter name = \n");
        scanf("%s",&mark[i].name);
        printf("enter Chemistry mark = \n");
        scanf("%f",&mark[i].Chemistry);
        printf("enter Mathematics mark = \n");
        scanf("%f",&mark[i].Mathematics);
        printf("enter Physics mark = \n");
        scanf("%f",&mark[i].Physics);
    }

    for ( i = 0; i < n; i++){
        printf("\n Student %d",i+1);
        Total=(mark[i].Chemistry + mark[i].Mathematics + mark[i].Physics)/300*100;
        printf("\n Total is : %.2f",Total);
    }
    
return 0;
}
