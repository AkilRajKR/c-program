 
 int main(){
    int num,product=1;

    printf("enter the 5digit number; ");
    scanf("%d",&num);
     
  while(num){
        int c=num%10;
       
        num=num/10;

        product*=c;
       
  }
   printf("%d",product); 
}
