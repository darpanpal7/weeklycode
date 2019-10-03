#include<stdio.h>
int main(){
    int n,k,counter=0,i,j;
    //taking inputs
    scanf("%d%d",&n,&k);
    int ar[n];
    for(i=0;i<n;i++)
        scanf("%d",&ar[i]);
    //checking pairs
    for(i=0;i<n;i++)
        for(j=i+1;j<n;j++)
            if((ar[i]+ar[j])%k==0)
                counter+=1;
    //printing result
    printf("%d",counter);
    return 0;
}
