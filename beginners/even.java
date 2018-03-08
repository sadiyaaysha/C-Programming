/* package whatever; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
	int n,k;
	Scanner scan=new Scanner(System.in);
	n=scan.nextInt();
	k=scan.nextInt();
	int i;
	for(i=n;i<=k;++i)
	{
		
		if(i%2==0)
		{
			System.out.print(i+" ");
		}
	}
	}
}
