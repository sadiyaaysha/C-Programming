/* package whatever; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
		int d;
		Scanner scan=new Scanner(System.in);
		d=scan.nextInt();
	int fact=1;
		for(int i=1;i<=d;i++)
		{
		fact=fact*i;
	}
	System.out.print(fact);
}

}
