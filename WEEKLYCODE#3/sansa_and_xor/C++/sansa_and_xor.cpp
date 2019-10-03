#include <iostream>
using namespace std;

int main() {
	int t,i;
	cin>>t;
	//for each test case
	while(t--){
	    int n,res=0;
	    //taking inputs
	    cin>>n;
	    int ar[n];
	    for(i=0;i<n;i++)
	        cin>>ar[i];
	    //if n is odd ,then result will be xor of even indexed elements otherwise 0
	    if(n%2!=0)
	        for(i=0;i<n;i+=2)
	            res=res^ar[i];
	    //printing result
	    cout<<res<<endl;
	}
	return 0;
}