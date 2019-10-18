#include<stdio.h>
#include<string.h>
#include <iostream>
 
using namespace std; 

int main(){
    int ar[26],i;
    //taking the array of heights as input
    for(i=0;i<26;i++)
        cin>>ar[i];
    char str[15];
    //taking string input
    cin>>str;
    //finding max height in the word
    int max=ar[str[0]-97];
    for(i=1;i<strlen(str);i++)
        if(max<ar[str[i]-97])
            max=ar[str[i]-97];
    //printing answer
    cout<<max*strlen(str);
    return 0;
}
