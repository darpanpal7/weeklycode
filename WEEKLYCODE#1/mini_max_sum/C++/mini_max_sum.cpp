#include <iostream>

using namespace std;

int i,j;
//just a swap function
void swap(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;
}
//bubble sort function
void bubblesort(int *ar,int n){
    for(i=0;i<n-1;i++)
        for(j=0;j<n-1-i;j++)
            if(ar[j]>ar[j+1])
                swap(&ar[j],&ar[j+1]);
}
int main()
{
    int ar[5];
    //declaring minsum and maxsum as long long int type as they can overflow int type
    long long int minsum=0,maxsum=0;
    //taking input array
    for(i=0;i<5;i++)
        cin>>ar[i];
    //sorting
    bubblesort(ar,5);
    //calculating the sum of first four elements
    for(i=0;i<4;i++)
        minsum+=ar[i];
    //calculating the sum of last four elements
    for(i=1;i<5;i++)
        maxsum+=ar[i];
    printf("%lld %lld",minsum,maxsum);
    return 0;
}
