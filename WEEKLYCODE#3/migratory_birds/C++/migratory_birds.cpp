#include <iostream>
using namespace std;

int main() {
	int n,i,max,m,ind;
    //taking inputs
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
        scanf("%d",&ar[i]);
    //finding the max element
    max=ar[0];
    for(i=1;i<n;i++)
        if(ar[i]>max)
            max=ar[i];
    max+=1;
    //declaring and assigning an array of size max equal to 0
    int br[max];
    for(i=0;i<max;i++)
        br[i]=0;
    //using index based increment for frequency of a number
    for(i=0;i<n;i++)
        br[ar[i]]+=1;
    m=br[0];
    ind=0;
    //choosing the index with max frequency
    for(i=1;i<max;i++)
        if(m<br[i]){
            m=br[i];
            ind=i;
        }
    //printing result
    printf("%d",ind);
    
	return 0;
}