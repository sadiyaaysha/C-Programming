#include <stdio.h>

int main(void) {
	int i;
	int n=10;
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	int max=a[0];
	for(i=0;i<10;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	printf("%d",max);
	return 0;
}
