#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,height=0,c=0,i;
    //taking inputs
    scanf("%d",&n);
    char str[n+1];
    scanf("%s",str);
    //iterating over the string
    for(i=0;i<n;i++){
        //decreasing height 
        if(str[i]=='D')
            height-=1;
        //increasing height
        else{
            height+=1;
            //counting valleys
            if(height==0)
                c+=1;
        }
    }
    //printing result
    printf("%d",c);
    return 0;
}
