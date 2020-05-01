#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,c;
	printf ("Enter the Three sides of the Triangle\n");
	scanf ("%f %f %f",& a, &b, &c);
	
	if (a==b && b==c)
	{
	
		printf ("The Triangle is, an Equidrateral Triangle\n");
	}
	else if (a==b||b==c||c==a)
	{
	
		printf("The Triangle is, an Isosceles Triangle");
	}
	else
		{
		
		printf ("The Triangle is, a Scaline Triangle");
	}
	return 0;
}
 

