
#include <stdio.h>

int friend(int num){
    int val = 0;
    for (int i = 1; i <= num / 2; i++) { 
        if (num % i == 0) { 
            val += i;
        }
    }
    return val / num; 
}


int main()
{
    int a, b;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);

    int first = friend(a);
    int second = friend(b);

    if (first == second){
        printf("friendly pair\n");
    }
    else{
        printf("not a friendly pair\n");
    }
}
