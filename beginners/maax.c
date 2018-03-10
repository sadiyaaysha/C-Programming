#include <stdio.h>

int main(void) {
	int i;
	int n1=10;
	int a[n1];
	for(i=0;i<n1;i++)
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
