#include <stdio.h>

int main(void) {
	int n,n1;
	scanf("%d",&n);
	scanf("%d",&n1);
	int i=n;
	int k=n1;
	i=i^k;
	k=i^k;
	i=i^k;
	printf("%d %d",i,k);
	return 0;
}
