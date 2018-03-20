#include<stdio.h>
void main() {
  int i,n,a=0;
   printf("Enter the number:");
   scanf("%d",&n);
  while(n>0)
  {
      i=n%10;
      a=a*10+i;
      n=n/10;
  }
    printf("\nThe reverse of anumber is:%d",a);
}
