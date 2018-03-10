
#include <stdio.h>
#include<math.h>
int main(void) {
int n;
scanf("%d",&n);
int temp;
while(n>0)
{
	temp=n%10;
	printf("%d",temp);
	n=n/10;
	
}
	
	
	
	
	return 0;
}
