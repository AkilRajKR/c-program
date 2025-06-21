#include <stdio.h>

int main(){

    int num;
  
    printf("enter the number; ");
    scanf("%d",&num);

    for (int i=1;i<=num;i++){

            if(i%2==0){
                for (int j=0;j<i;j++){
                printf("# ");
    }
            }else{
                for (int j=0;j<i;j++){
                printf("* ");
            }

        }
        printf("\n");
    }

} 