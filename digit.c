#include <stdio.h>
main()
{
long n;
int count = 0;
printf("Enter a integer: ");
scanf("%lld",&n);
while(n!=0)
{
n/=10;
++count;
}
printf("Number of digits:%d",count);
}
