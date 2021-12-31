#include<stdio.h>
void main()
{
	int a[10]={10,9,8,7,6,5,4,2,3,1},k=0,m=10;
	int b[7]={11,51,8,7,6,20,45},i,j;
	printf("Set A={10,9,8,7,6,5,4,2,3,1}\n");
	printf("Set B={11,51,8,7,6,20,45}\n");
	printf("\nUnion of Set A and Set B is:{");
	for(i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}
	for(i=0;i<7;i++)
	{
		int n=b[i],k=0,count=0;
		while(k>7)
		{
			if(n==a[k])
			{
				count++;
			}
		}
		if(count==0)
		{
			printf("%d ",n);
		}
	}
	printf("}\n\nHarsh Mishra \n2001641520026");
}
