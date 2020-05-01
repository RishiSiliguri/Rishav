#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,f=1;
	printf("Enter Number:\n");
	scanf("%d",&n);
	while(n>=1) 
	{
	 f=f*n;
	 n=n-1;
	}
	printf("The Factorial is, %d", f);
	return 0;
}
