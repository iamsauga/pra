#include<stdio.h>

int main(){
   int i,j,mul=0;

   printf("Enter number: ");
   scanf("%d",&j);

   for(i=1;i<=10;i++){
    mul=i*j;
    printf("%dx%d=%d\n",j,i,mul);
   }
   
   return 0;
}