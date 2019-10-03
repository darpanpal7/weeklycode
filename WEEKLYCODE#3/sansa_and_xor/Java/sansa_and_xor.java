import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution
{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        //for each test case
            for(int j=0;j<t;j++) {
                int n = input.nextInt();
                int res = 0,i;
                int a[] = new int[n];
                //taking input
                for ( i = 0; i < n; i++) 
                    a[i] = input.nextInt();
                //if n is odd ,then result will be xor of even indexed elements otherwise 0
                if(n%2 != 0)
                    for( i = 0; i < n; i += 2)
                        res ^= a[i];
                //printing result
                System.out.println(res);
            }
    }
}
