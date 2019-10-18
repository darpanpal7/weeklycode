#include <iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main(){
    int n,height=0,c=0,i;
    //taking inputs
    cin>>n;
    char str[n+1];
    cin>>str;
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
    cout<<c<<endl;
    return 0;
}
