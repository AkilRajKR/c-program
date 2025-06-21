#include <stdio.h>

int main(){
    int num;

    printf("enter the digit number; ");
    scanf("%d",&num);
     
    while(num ){
        int c=num%10;
        printf("%d",c);
        num=num/10;
        
    } 

} 

/**
int main(){
    int num,reverse=0;

    printf("enter the 5digit number; ");
    scanf("%d",&num);
     
  while(num){
        int c=num%10;
       
        num=num/10;

        reverse=(reverse*10)+c
        printf("%d",c);
        
}**/
 