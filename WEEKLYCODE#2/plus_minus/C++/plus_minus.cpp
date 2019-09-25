#include <iostream>
using namespace std;

int main() {
    
    int n,i,plus=0,minus=0,zero=0;
    cin>>n;
    int ar[n];
	//taking input
    for(i=0;i<n;i++)
        cin>>ar[i];
	//calculating elements >,<,= 0
    for(i=0;i<n;i++){
        if(ar[i]>0)
            plus++;
        else if(ar[i]<0)
            minus++;
        else
            zero++;
    }
	//type casting and printing results
    cout<<((float)plus/n)<<endl;
    cout<<((float)minus/n)<<endl;
    cout<<((float)zero/n)<<endl;
	return 0;
}

