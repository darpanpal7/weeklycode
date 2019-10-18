import java.util.Scanner;
import java.lang.Math;

public class Solution {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int[] heights  = new int[26];
    
        //taking inputs
        for (int i = 0; i < 26; i++) {
            heights[i] = input.nextInt();
        }
        String word = input.next();
        input.close();
        
        int rect_height = 0;
        
        //calculating max height
        for (int j = 0; j < word.length(); j++) {
            rect_height = Math.max(
                rect_height,
                heights[(int)word.charAt(j) - (int)'a']
            );
        }
        
        //printing answer
        int ans = word.length() * rect_height;
        System.out.println(ans);
    }
}