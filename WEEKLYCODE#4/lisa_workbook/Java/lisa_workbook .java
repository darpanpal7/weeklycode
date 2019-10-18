import java.util.Scanner;
import java.lang.Math;

public class Solution {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n,k,answer=0,page=1,chapter,problems,index;
        n=input.nextInt();
        k=input.nextInt();
        for(chapter=1;chapter<=n;chapter++){
            problems=input.nextInt();
            for(index=1;index<=problems;index++){
                if(index==page)
                    answer++;
                if(index==problems||index%k==0)
                    ++page;
            }
        }
        System.out.println(answer);
    }
}