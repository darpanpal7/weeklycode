#include <stdio.h>

int main(void) {
	int n,i,plus=0,minus=0,zero=0;
	scanf("%d",&n);
	int ar[n];
	//taking input
	for(i=0;i<n;i++)
	    scanf("%d",&ar[i]);
	//calculating number of elements >,<,= 0
	for(i=0;i<n;i++){
	    if(ar[i]>0)
	        plus++;
	    else if(ar[i]<0)
	        minus++;
	    else
	        zero++;
	}
	//type casting and printing float values
	printf("%f\n",(float)plus/n);
	printf("%f\n",(float)minus/n);
	printf("%f\n",(float)zero/n);
	return 0;
}

