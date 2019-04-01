#include<stdio.h>
main()
{
int i,n,s=0;
printf("enter the number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
s=s+i;
printf("sum of natural numbers:",s);
}
}
