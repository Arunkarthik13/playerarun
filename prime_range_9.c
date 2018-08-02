#include<stdio.h>
int main() 
{
  int n,r,i,j,count;
  scanf("%d %d",&n,&r);
  for(i=n;i<=r;i++)
  {
      count=0;
      for(j=2;j<i;j++)
      {
          if((i%j)==0)
          {
              count++;
          }
      }
      if(count==0)
      {
              printf("%d ",i);
      }
    }
}
