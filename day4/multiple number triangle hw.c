#include <stdio.h>

int main(){

    int num;
  
    printf("enter the number; ");
    scanf("%d",&num);

    for (int i=1;i<=num;i++){

            if(i%2==0){
                for (int j=0;j<i;j++){
                    int x=j*2+2;
                printf("%d ",x);
             }
            }else{
                for (int j=0;j<i;j++){
                    int y=j*2+1;
                printf("%d ",y);
            }

        }
        printf("\n");
    }

} 