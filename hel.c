#include<stdio.h>

int main(){
    int a,b,sum;
    printf("Enter two numbers: ");
    scanf("%d",&a);
     scanf("%d",&b);
  if (a<b)
  {
    printf("%d is smaller than %d ",a,b);
  }
  else if (a>b)
  {
    printf("%d is smaller than %d",b,a);
  }
  else{
    printf("%d is equal to %d",a,b);
  }
  
  
    return 0;
}