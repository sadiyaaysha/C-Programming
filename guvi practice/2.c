
#include <stdio.h>
#include<math.h>
int main(void) {
int n;
scanf("%d",&n);
int i;
int a[n];
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n-1;i++)

{

if(a[i]>a[i+1])
{
	
	printf("%d",i);
	
}

	
}	
	
	
	return 0;
}
