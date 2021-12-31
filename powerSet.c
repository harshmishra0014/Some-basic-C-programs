#include <stdio.h>
#include <math.h>
#define size 1000
int a[size],i;
void powerSet(int a[],int n)
{
	unsigned int powersize=pow(2,n);
	int j;
	for(i=0;i< powersize;i++)
	{
	printf("{ ");
	for(j=0;j<n;j++)
	{
		if(i & (1<<j))
		{
			printf("%d ", a[j]);
		}
	}
	printf("}");
	printf("\n");
	}
}
int main()
{
	int n;
	printf("Program to find Power Set of a given set:");
	printf("\n\nEnter number of elements in the set:");
	scanf("%d",&n);
	printf("\nEnter elements of set:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	powerSet(a,n);
	printf("\n\nHarsh Mishra\n2001641520026");
}

