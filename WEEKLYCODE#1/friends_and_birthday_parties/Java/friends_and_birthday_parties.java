
import java.util.*;
import java.lang.*;
import java.io.*;
import java.util.Scanner;

public class solution
{
    public static void main (String[] args) throws java.lang.Exception
    {
        Scanner input = new Scanner(System.in);
        int res=1,i;
        String str;
        str = input.nextLine();
        //calculating lenght of the string
        int len=str.length();
        //converting string to character array
        char s[] = str.toCharArray(); 
        //counting number of commas (,)
         for(i=0;i<len;i++)   
                if(s[i]==',')   
                    res++;  
        
        System.out.println(res);
    }
}
