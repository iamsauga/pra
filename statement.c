#include<stdio.h>
 int main(){
    int a,b;
    char choose;
    printf("Enter two number : ");
    scanf("%d",&a);
    scanf("%d",&int b);
    printf("enter operator (+,-,*,/)");
    scanf("%s",&choose);
    switch (choose)
    {
    case '+':
        int sum=a+b;
        printf("the sum of %d and %d = %d",a,b,sum);
        break;
    case '-':
    int dif=a-b;
    printf("the difference of %d and %d = %d ",a,b,dif);
    break;
    
    default:
    printf("Invalid operands or operator");
        break;
    }

 }