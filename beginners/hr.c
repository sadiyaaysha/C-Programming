
#include<stdio.h>
#include<math.h>
void main()
{
int min,hr,hr1,min2;
printf("enter the minute");
scanf("%d",&min);
scanf("%d",&min2);
scanf("%d",&hr);
scanf("%d",&hr1);
int t1;
int t2;
t1=abs(hr-hr1);
t2=abs(min-min2);
printf("%d\t%d",t1,t2);
}
