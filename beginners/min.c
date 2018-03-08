#include <stdio.h>

int main(void) {
	// your code goes here
int n;
scanf("%d",&n);
int a[n];
int i;
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
	
}
int max=a[0];
for(i=0;i<n;i++)
{
	if(a[i]<max)
	max=a[i];
}
printf("%d",max);
	return 0;
}
