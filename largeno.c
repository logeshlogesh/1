#include <stdio.h>
void main()
{
int a,b,c;
printf("Enter the values:");
scanf("%d%d%d",&a,&b,&c);
if (a>b)
{
if (a>c)
{
printf("a is the greatest among three \n");
}
else
{
printf("c is the greatest among three \n");
}
}
else if (b>c)
{
printf("b is the greatest among three \n");
}
else
{
printf("c is the greatest among three \n");
}
}
