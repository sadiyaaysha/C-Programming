#include<stdio.h>
#include<string.h>
 int main()
 {
   int i;
   char a[10];
   char b[10];
   scanf("%s",a);
   scanf("%s",b);
   if(strcmp(a,b))
   {
   	printf("no");
   }
   else
   printf("yes");
return 0;
 }
