#include <stdio.h>

int main() {
    int n, k;
    //taking inputs
    scanf("%d%d", &n, &k);
    int answer = 0;
    int page = 1;
    
    //checking for each value of chapter
    for(int chapter = 1; chapter <= n; ++chapter) {
        int problems;
        scanf("%d", &problems);
        for(int index = 1; index <= problems; ++index) {
            if(index == page)
                answer++;
            if(index == problems || index % k == 0)
                ++page;
        }
    }
    //printing answer
    printf("%d\n", answer);
    return 0;
}