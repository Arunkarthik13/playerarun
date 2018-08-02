#include<stdio.h>
#include<string.h>
int main() {
  char a[100],b[100],i,j,count=0,n;
  scanf("%s %s",&a,&b);
  n=strlen(a);
  for(i=0;i<n;i++)
  {
      if(a[i]!=b[i])
      {
          count++;
      }
  }
  if(count==1)
  {
      printf("yes");
  }
  else
  {
      printf("no");
  }
  return 0;
}
