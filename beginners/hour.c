
#include<stdio.h>
void main()
{
int min,hr1;
printf("enter the minute");
scanf("%d",&min);
hr1=min/60;
min=min%60;
printf("%d\t%d",hr1,min);
}
