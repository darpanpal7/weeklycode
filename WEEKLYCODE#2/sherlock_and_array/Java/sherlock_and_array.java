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
                int a[] = new int[n];
                long total = 0;
                //taking input and calulating total sum
                for (int i = 0; i < n; i++) {
                    a[i] = input.nextInt();
                    total += a[i];
                }
                //checking for element
                int sumLeft = 0;
                String result = "NO";
                for (int i = 0; i < n; i++) {
                    if (total - sumLeft - a[i] == sumLeft) {
                        result = "YES";
                        break;
                    }
                    sumLeft += a[i];
                }
                //printing result
                System.out.println(result);
            }
    }
}
