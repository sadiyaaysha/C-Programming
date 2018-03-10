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
String d;
d=scan.nextLine();
char[] a=d.toCharArray();
int i;
int f=1;
int j;
for(i=0;i<a.length;i++)
{
	for(j=i+1;j<a.length;i++)
	{
		if(a[i]==a[j])
		{
			f=0;
			break;
		
		}
	}
}

if(f==0)
System.out.print("yes");
else
System.out.print("no");
	}
}
