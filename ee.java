

import java.util.*;
import java.lang.*;
import java.io.*;


class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
char swap;
	String d;
	Scanner scan=new Scanner(System.in);
	
	d=scan.nextLine();
	char[] a=d.toCharArray();
	int i;
	for(i=0;i<d.length();i=i+2)
	{
		swap=a[i];
		a[i]=a[i+1];
		a[i+1]=swap;
	}
	System.out.print(a);
	}
}
