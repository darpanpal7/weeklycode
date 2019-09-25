import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution
{
	public static void main(String[] args) {
	    Scanner input = new Scanner(System.in);
		int i,n,x,plus=0,minus=0,zero=0;
		n=input.nextInt();
		//taking input and calculating elements >,<,= 0
		for(i=0;i<n;i++){
		    x=input.nextInt();
		    if(x>0)
		        plus++;
		    else if(x<0)
		        minus++;
		    else
		        zero++;
		}
		//type casting and printing results
		System.out.println(plus/(float)n);
		System.out.println(minus/(float)n);
		System.out.println(zero/(float)n);
	}
}
