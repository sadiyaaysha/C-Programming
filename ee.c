#include <stdio.h>
int main()
{
    int n, i, flag;
int l,h;
scanf("%d%d",&l,&h);
for(i=l;i<h;i++)
{
	flag=0;
    for(i=2; i<=n/2; ++i)
    {
        // condition for nonprime number
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }

    if (flag==0)
        printf(" prime number.",n);
    else
        printf("not a prime number");
}
    
    return 0;
}
