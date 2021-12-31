#include <stdio.h>
#define size 1000
int S1[size],S2[size],i,j;
int main()
{
	int n,m;
	printf("Program to find Cartesian product of two set:");
	printf("\n\nEnter number of elements in the set-1:");
	scanf("%d",&n);
	printf("\nEnter elements of set-1:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&S1[i]);
	}
	printf("\n\nEnter number of elements in the set-2:");
	scanf("%d",&m);
	printf("\nEnter elements of set-2:\n");
	for(i=0;i<m;i++)
	{
		scanf("%d",&S2[i]);
	}
	printf("Cartesian Product:\n");
	printf("{ ");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
			printf("(%d %d) ",S1[i],S2[j]);
		printf(" ");
	}
	printf("}");
	printf("\n\nHarsh Mishra\n2001641520026");
	return 0;
}
