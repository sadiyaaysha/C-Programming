
#include<stdio.h>
#include<math.h>
void main()
{
int n;
scanf("%d",&n);
int temp;
int i;
int c=0;
while(n>0)
{
	temp=n%10;
	c++;
	n=n/10;
}
printf("%d",c);
return 0;
}
