#include<stdio.h>
int fact (int);
main()
{   
	int N;
	printf("Enter the Number of which the Factorial is to be Calculated\n");
	scanf("%d",&N);
	printf("%d",fact(N));
	
   
}    
	int fact(int n)
	{ 
		int i,f=1;
		while(n>1)
		f=f*n;
		n=n-1;
	return(f);
	}
