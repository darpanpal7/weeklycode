import java.util.*;
import java.lang.*;
import java.io.*;

public class solution
{
	public static void main (String[] args) throws java.lang.Exception
	{
	    Scanner input = new Scanner(System.in);
		int i,c1=0,c2=0;
		int []a=new int[3];
		int []b=new int[3];
		//taking inputs
		for(i=0;i<3;i++)
		    a[i]=input.nextInt();
		for(i=0;i<3;i++)
		    b[i]=input.nextInt();
		//calculating c1 & c2
		for(i=0;i<3;i++){
		    if(a[i]>b[i])
		        c1++;
		    if(b[i]>a[i])
		        c2++;
		} 
		//printing results
		System.out.printf(c1+" "+c2);
	}
}
