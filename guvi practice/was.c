
#include <stdio.h>
#include<math.h>
int main(void) {
int n;
scanf("%d",&n);
int i;
int temp;
int mul=1;
while(n>0)
{
	temp=n%10;
	mul=mul*temp;
	n=n/10;
}
printf("%d",mul);
	
	return 0;
}
