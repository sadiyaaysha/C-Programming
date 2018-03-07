#include <stdio.h>

int main(void) {
int n;
scanf("%d",&n);

int a[n];
int i;
int sum=0;

for(i=0;i<=n;i++)
{
	sum=sum+i;
}
printf("%d",sum);
return 0;
}
