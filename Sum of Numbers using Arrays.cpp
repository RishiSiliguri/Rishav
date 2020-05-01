 #include<stdio.h>
#include<stdlib.h>
main()
{
	int n,a[10],x,sum=0,i;
	printf ("Enter the Size of Array(n)\n");
	scanf ("%d",&n);
	printf("Enter the Numbers\n");
	scanf ("%d", &a[i]);

	
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	printf("The Sum is, %d\n",sum);
	return 0;
}
