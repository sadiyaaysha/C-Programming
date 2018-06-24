
import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner scan=new Scanner(System.in);
	//	int n=scan.nextInt();
		int n1=scan.nextInt();
	int[] a=new int[n1];
	int[] b=new int[n1];
	int i;
	for(i=0;i<n1;i++)
	{
		a[i]=scan.nextInt();
	}
	for(i=0;i<n1;i++)
	{
		b[i]=scan.nextInt();
	}
		for(i=0;i<n1;i++)
		{
			for(int j=0;j<n1;j++)
			{
				if(a[i]==b[j])
				{
				System.out.print(a[i]);	
				}
			}
		}
	}
}
