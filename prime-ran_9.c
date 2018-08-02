#include<stdio.h>
int main() 
{
  int n,r,i,s,count;
  scanf("%d %d",&n,&r);
  for(i=n;i<=r;i++)
  {
      count=0;
      for(s=2;s<i;s++)
      {
          if((i%s)==0)
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
