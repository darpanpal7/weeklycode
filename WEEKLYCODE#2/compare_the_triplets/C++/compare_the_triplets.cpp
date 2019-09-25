#include <iostream>
using namespace std;

int main() {
	int a[3],b[3],c1=0,c2=0,i;
	//taking inputs
	for(i=0;i<3;i++)
	    cin>>a[i];
	for(i=0;i<3;i++)
	    cin>>b[i];
	//calculating c1 & c2
	for(i=0;i<3;i++){
	    if(a[i]>b[i])
	        c1++;
	   if(b[i]>a[i])
	        c2++;
	}
	//printing results
	cout<<c1<<" "<<c2;

	return 0;
}
