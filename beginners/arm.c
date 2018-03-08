#include<stdio.h>
#include<math.h>
int main()
{
    int n, i;



    scanf("%d",&n);
int temp;

int c=0;
int sum=0;
      while(n>0)
      {
      	temp=n%10;
      	c++;
      	n=n/10;
      }
      while(n>0)
      {
      temp=n%10;
      sum=sum+(int)pow(temp,c);
      n=n/10;
      	
      	
      }
      if(sum==n)
      
      printf("yes");
      else
      printf("no");
    

    return 0;
}
