 
 #include <stdio.h>


 int factorial(int a){
    int sum=1;
    if (a<0){
        printf("Number should be greater than zero\n");
        return -1; 
    }else{

       for (int i=1;i<=a;i++){
        sum*=i;
       }
      
    } 
     return sum;
 }

 int main(){
    int a;
    printf("How many numbers you want to factorial: ");
    scanf("%d",&a);
    int total=0;
    for (int j=1;j<=a;j++){
        int k;
        printf("Enter the %d number: ",j); 
        scanf("%d",&k);
        int f=factorial( k);
        total+= f;

 }
 printf("Total sum of factorials = %d",total);
 return 0;
}

#include<stdio.h>
int main(){
    
    int n,sum=0;
    
    scanf("%d",&n);
    
    for(int i = 1; i<=n;i++){
        int fact=1;
        
        for(int j=1;j<=i;j++){
            fact=fact*j;
        }
         sum+=fact;
     
         
        
    }    printf("%d ", sum);
    
    
   
}

/*
#include<stdio.h>
int main(){
    
    int n,sum=0;
    
    scanf("%d",&n);
    
    for(int i = 1; i<=n;i++){
        int fact=1;
        
        for(int j=1;j<=i;j++){
            fact=fact*j;
        }
         sum+=fact;
     
         
        
    }    printf("%d ", sum);
    
    
   
}*/