
import java.util.*;
import java.lang.*;
import java.io.*;
import java.util.Scanner;
import java.util.Arrays;

public class solution
{
    public static void main (String[] args) throws java.lang.Exception
    {
        Scanner input = new Scanner(System.in);
        int []ar=new int[5];
        int i;
        long minsum=0,maxsum=0;
        //taking input array
        for(i=0;i<5;i++)
            ar[i]=input.nextInt();
        //sorting 
        Arrays.sort(ar);
        //taking first four elements 
        for(i=0;i<4;i++)
            minsum+=ar[i];
        //taking last four elements
        for(i=1;i<5;i++)
            maxsum+=ar[i];
        //printing
        System.out.printf(minsum+" "+maxsum);
    }
}
