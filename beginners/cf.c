
#include<stdio.h>

int main(void)
{
int n,k;
scanf("%d",&n);
scanf("%d",&k);
int a[n];
int i;

for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
	if(a[i]==k)
	printf("%d",a[i]);
}
return 0;
}
