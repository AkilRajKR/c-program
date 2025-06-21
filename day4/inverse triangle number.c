#include <stdio.h>

int main(){

    int num;
  
    printf("enter the number; ");
    scanf("%d",&num);

    for (int i=num;i>0;i--){
        for (int j=num;j>i;j--){
                printf("%d",j);
    }
        printf("\n");
    }

}