#include <stdio.h>

int main(void) {
int n;
scanf("%d",&n);
int temp;
int c=0;
while(n>0)
{
	temp=n%10;
n=n/10;
c++;
}
printf("%d",c);
	return 0;
}
