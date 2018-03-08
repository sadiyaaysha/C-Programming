
#include<stdio.h>

int main(void)
{
char a[10];
scanf("%s",a);
int i;
int k;
scanf("%d",&k);
for(i=0;i<k;i++)
{
	printf("%c",a[i]);
}
return 0;
}
