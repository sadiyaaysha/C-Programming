 

    #include <stdio.h>

    int main(void)

    {

 

        int i;

        printf("Enter the value of N \n");
int n;
        scanf("%d", &n);
        int a[n];
        for(i=0;i<n;i++)
        {
        	scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
        	printf("%d %d\n",a[i],i);
        }
return 0;
    }
