#include <stdio.h>

int main() {
    int t,i;
    scanf("%d",&t);
    //for each test case
    while(t--){
        int n,res=0;
        //taking input
        scanf("%d",&n);
        int ar[n];
        for(i=0;i<n;i++)
            scanf("%d",&ar[i]);
        //if n is odd ,then result will be xor of even indexed elements otherwise 0
        if(n%2!=0)
            for(i=0;i<n;i+=2)
                res=res^ar[i];
       //printing result
       printf("%d\n",res);
    }
    return 0;
}