#include <iostream>

using namespace std;

int main()
{
    int n,d,*ar,i;
    //declaring n,d for taking inputs where n:=size of the array & d:=number of rotations
    //declaring i as the loop variable
    //declaring a int pointer to make array
    cin>>n;
    cin>>d;
    //allocating size to array , this is same as declaring an array of size n , ( int ar[n]; )
    ar=(int *)malloc(n*sizeof(int ));
    //taking the array as input
    for(i=0;i<n;i++)
        cin>>ar[i];
    //printing array starting from d up to n
    for(i=d;i<n;i++)
        cout<<ar[i]<<" ";
    //printing array starting from 0 up to d
    for(i=0;i<d;i++)
        cout<<ar[i]<<" ";
    return 0;
}
