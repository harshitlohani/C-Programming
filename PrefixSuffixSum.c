#include<stdio.h>
void main()
{
int array[10]={1,2,3,4,5,6,7,8,9,10};
int i,j=0,k=10,sum1=0,sum2=0,sum=0;
printf("enter the no: of terms to be added(should be b/w 1 to 10) : ");
scanf("%d",&i);
while(j<i)
{
    sum1=sum1+array[j];
    j++;
}
while(k-i<10)
{
    sum2=sum2+array[k-i];
    k++;
}
sum=sum1+sum2;
printf("Prefix sum is %d \n",sum1);
printf("Suffix sum is %d \n",sum2);
printf("Prefix[%d] + Suffix[%d] = %d ",i,i,sum);
}
