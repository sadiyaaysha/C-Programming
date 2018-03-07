#include <stdio.h>

int main(void) {
int n;
scanf("%d",&n);
int k;
scanf("%d",&k);
int a[n];
int i;
int sum=0;
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
for(i=0;i<k;i++)
{
	sum=sum+a[i];
}
printf("%d",sum);
return 0;
}
