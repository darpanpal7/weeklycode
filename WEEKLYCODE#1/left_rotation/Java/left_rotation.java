
import java.util.*;
import java.lang.*;
import java.io.*;
import java.util.Scanner;

public class solution
{
	public static void main (String[] args) throws java.lang.Exception
	{
	    Scanner input = new Scanner(System.in);
		int n,d,i;
		//taking input 
		n=input.nextInt();
		d=input.nextInt();
		int []ar=new int[n];
		//taking input array
		for(i=0;i<n;i++)
		    ar[i]=input.nextInt();
		//printing array starting from d up to n    
		for(i=d;i<n;i++)
		    System.out.printf(ar[i]+" ");
		//printing array starting from 0 up to d
		for(i=0;i<d;i++)
		    System.out.printf(ar[i]+" ");
	}
}
