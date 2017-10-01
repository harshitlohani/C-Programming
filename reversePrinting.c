#include<stdio.h>
int n;
void main()
{
    printf("Enter the no: ");
    scanf("%d",&n);
    printnos(n);
}
int printnos(n)
{
if(n>0)
{
printf("%d \t",n);
printnos(n-1);
}
}
