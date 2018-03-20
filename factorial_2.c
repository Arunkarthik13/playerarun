#include <stdio.h>
int facto(int);
void main()
{
    int n,a;
    printf("Enter the number:");
    scanf("%d",&n);
    a=facto(n);
    printf("\nThe factorial of agiven number is:%d",a);
    
}
int facto(int n)
{
    if(n==0)
    return 1;
    else
    return (n*facto(n-1));
}
