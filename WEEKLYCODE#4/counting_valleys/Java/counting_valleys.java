import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        char[] str = input.next().toCharArray();
        
        int c = 0;
        int height = 0;
        
        for(char ch : str) {
            // Step up
            if(ch == 'U') {
                if(height == -1) {
                    c++;
                }
                height++;
            }
            // Step down
            else {
                height--;
            }
        }

        input.close();
        
        System.out.println(c);
    }
}