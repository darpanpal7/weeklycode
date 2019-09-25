#include <iostream>
using namespace std;

int main()
{
    int t,i;
    scanf("%d",&t);
    //for each test case
    while(t--){
        int n,sum=0;
        scanf("%d",&n);
        int a[n],b[n];
        //taking input
        for(i=0;i<n;i++)
            cin>>a[i];
        //creating a prefix array
        for(i=0;i<n;i++){
            b[i]=sum;
            sum+=a[i];
        }
        //checking the element
        for(i=0;i<n;i++)
            if(b[i]==sum-b[i]-a[i]){
                cout<<"YES"<<endl;
                break;
            }
        
        if(i==n)
            cout<<"NO"<<endl;
    }
    return(0);
    
}