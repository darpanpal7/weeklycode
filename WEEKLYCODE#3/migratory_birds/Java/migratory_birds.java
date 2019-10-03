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
            int i,m,ind,max;
            int ar[] = new int[n];
            //taking input
            for ( i = 0; i < n; i++) 
                ar[i] = input.nextInt();
            ///finding the max element
            max=ar[0];
            for(i=1;i<n;i++)
                if(ar[i]>max)
                    max=ar[i];
            max+=1;
            //declaring and assigning an array of size max equal to 0
            int br[] = new int[max];
            for(i=0;i<max;i++)
                br[i]=0;
            //using index based increment for frequency of a number
            for(i=0;i<n;i++)
                br[ar[i]]+=1;
            m=br[0];
            ind=0;
            //choosing the index with max frequency
            for(i=1;i<max;i++)
                if(m<br[i]){
                    m=br[i];
                    ind=i;
                }
            //printing result
            System.out.println(ind);
    }
}
