#include<stdio.h>
main()
{
int n,r=0,t;
printf("Enter an integer to check if it is palindrome or not\n");
scanf("%d",&n);
if(n<=1000)
t=n;
while(t!=0)
{
r=r*10;
r=r+t%10;
t=t/10;
}
if(n==r)
printf("yes");
else
printf("no");
return 0;
}
