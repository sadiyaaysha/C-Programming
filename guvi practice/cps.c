#include <stdio.h>
#include<string.h>
int main(void)
{
	int i;
	char a[10];
	scanf("%[^\n]s",a);
	for(i=0;i<strlen(a);i++)
	{
		if(i==0)
		{
			a[i]=a[i]-32;
		}
		if(a[i]==32)
		{
			++i;
			a[i]=a[i]-32;
		}
	}
	printf("%s",a);

	return 0;
}
