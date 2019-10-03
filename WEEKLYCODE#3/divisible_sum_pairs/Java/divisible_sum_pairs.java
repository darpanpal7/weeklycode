import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution
{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
            int n = input.nextInt();
            int k = input.nextInt();
            int counter = 0,i,j;
            int a[] = new int[n];
            //taking input
            for ( i = 0; i < n; i++) 
                a[i] = input.nextInt();
            //checking the condition
            for(i = 0; i < n; i += 1)
                for(j = i + 1; j < n; j += 1)
                    if((a[i]+a[j])%k==0)
                        counter+=1;
            //printing result
            System.out.println(counter);
    }
}
