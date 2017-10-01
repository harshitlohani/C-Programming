#include<stdio.h>
void main()
{
int a,b;
char array[]={"HARSHIT"};
for(a=1;a<7;a++)
{
    for(b=0;b<a;b++)
    {
        printf("%c",array[b]);
    }
     printf("\n");
}
for(a=7;a>=0;a--)
{
    for(b=0;b<a;b++)
    {
        printf("%c",array[b]);
    }
     printf("\n");
}
}
