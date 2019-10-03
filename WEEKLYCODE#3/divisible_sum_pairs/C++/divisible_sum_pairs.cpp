#include <iostream>
using namespace std;

int main() {
	int n,k,counter=0,i,j;
    //taking inputs
    cin>>n;
    cin>>k;
    int ar[n];
    for(i=0;i<n;i++)
        cin>>ar[i];
    //checking pairs
    for(i=0;i<n;i++)
        for(j=i+1;j<n;j++)
            if((ar[i]+ar[j])%k==0)
                counter+=1;
    //printing result
    cout<<counter<<endl;
	return 0;
}