
#include<stdio.h>

int main(void)
{
int n;
int a[n];
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
int swap;
int j;
for(i=0;i<n;i++)
{
	for(j=i+1;j<n;j++)
	{
		if(a[i]>a[j])
		{
			swap=a[i];
			a[i]=a[j];
			a[j]=swap;
		}
	}
}
for(i=n;i>0;i--)
{
	if(i==n-1)
	printf("%d",a[i-1]);
	break;
}

return 0;
}
