
#include<stdio.h>

int main(void)
{
int n;
scanf("%d",&n);

int p=1;
int temp;

if(n==0)
{
	p=0;
	
}
else
{
while(n>0)
{
	temp=n%10;
	if(temp>1)
	{
		p=0;
		
	}
	n=n/10;
}
}

if(p==1)
{
	printf("yes");
}
else
printf("no");
return 0;
}
