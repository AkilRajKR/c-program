#include <stdio.h>

int main(){

    int num;
  
    printf("enter the number; ");
    scanf("%d",&num);

    for (int i=1;i<=num;i++){

        if (i==1 || i==num){
          for (int j=1;j<=num ;j++){
             printf("* ");
          }
         
        }else{
                printf("* ");
               for (int j = 1; j <= num - 2; j++) { 
                printf("  "); 
        }  
        printf("*"); 
    }
          printf("\n");
    }
}