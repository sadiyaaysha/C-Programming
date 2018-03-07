#include <stdio.h>

int main(void) {
int n;
scanf("%d",&n);
if(n%4==0&&n%400==0)
{
	printf("leap");
}
else
printf("not leap year");

return 0;
}
