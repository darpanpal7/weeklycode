#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string str;
    int i,len,count=0;
    //we take string as input
    cin>>str;
    //calculating the length of the string
    len=str.length();
    //counting the number of commas(,) in the string
    for(i=0;i<len;i++)
        if(str[i]==',')
            count++;

    count++;
    //printing answer
    cout<<count;
    return 0;
}
