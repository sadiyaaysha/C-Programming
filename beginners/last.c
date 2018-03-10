#include <stdio.h>
#include<string.h>
int main(void) {
	int n;
	scanf("%d",&n);
	int i=0;
	int k;
	scanf("%d",&k);
int temp;
while(i<k)
{
temp=n%10;
printf("%d",temp);
n=n/10;
i++;
}

	

return 0;	
}
