//perfect number
#include<stdio.h>
void main()
{
	int a,i,sum=0;
	printf("enter a number :");
	scanf("%d",&a);
	for (i=1;i<a;i++)
	{
		if (a%i==0)
		{
			sum+=i;
		}
	}
	printf("\n");
	if (sum==a)
	{
		printf("its a perfect number ");
	}
	else
	{
		printf("its not a perfect number");
	}
}
