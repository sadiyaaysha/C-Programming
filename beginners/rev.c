/* package whatever; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
		String d;
		Scanner scan=new Scanner(System.in);
		d=scan.nextLine();
		char[] a=d.toCharArray();
		int l=d.length();
		for(int i=l-1;i>=0;i--)
		{
		System.out.print(a[i]);
	}
}
}
