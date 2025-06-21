#include <stdio.h>

int main(){

    int num;
  
    printf("enter the number; ");
    scanf("%d",&num);

    for (int i=1;i<=num;i++){
        for (int j=0;j<num;j++){
                printf("%d ",i);
    }
        printf("\n");
    }

}