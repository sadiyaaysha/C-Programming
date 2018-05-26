/* package whatever; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner scan=new Scanner(System.in);
		int r=scan.nextInt();
		while(r>0)
		{
		int n;
		int y;
		n=scan.nextInt();
		int[] a=new int[n];
		//int[] a1=new int[n];
		int count=0;
		y=scan.nextInt();
		int i;
		for(i=0;i<n;i++)
		{
			a[i]=scan.nextInt();
		}
	
	int sw;
	int j;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				sw=a[i];
				a[i]=a[j];
				a[j]=sw;
			}
		}
	}
		for(i=0;i<n;i++)
		{
			count++;
			if(y==count)
			{
			System.out.println(a[i]);	
			}
	

		}
			r--;
		}
	}
}
