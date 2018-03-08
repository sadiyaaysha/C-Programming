#include <stdio.h>
#include<string.h>
int main(void) {
char a[10];
scanf("[^/n]s",a);
int i;
int c=1;
for(i=0;i<strlen(a);i++)
{
	c++;
}
printf("%d",c);
}
