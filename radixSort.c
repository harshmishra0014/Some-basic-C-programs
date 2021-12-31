#include <stdio.h>
int getMax(int a[],int n)
{
	int i;
	int max=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>max)
		max=a[i];
	}
	return max;
}
void radixSort(int a[],int n)
{
	int pos,i;
	int max=getMax(a,n);
	for(pos=1;max/pos>0;pos*=10)
	{
		countSort(a,n,pos);
	}
}
void countSort(int a[],int n,int pos)
{
	int i;int pass=1;
	int count[10]={0};
	int b[n];
	for(i=0;i<n;i++)
	{
		count[(a[i]/pos)%10]++;
		b[i]=0;
	}
	/*printf("\nafter %d pass\n",pass);pass++;
		for(i=0;i<n;i++)
		{
			printf("%d ",count[i]);
		}*/
	for(i=1;i<10;i++)
	{
		count[i]=count[i]+count[i-1];
	}
	/*printf("\nafter %d pass\n",pass);pass++;
		for(i=0;i<n;i++)
		{
			printf("%d ",count[i]);
		}*/
	for(i=n-1;i>=0;i--)
	{
		b[--count[(a[i]/pos)%10]]=a[i];
	}	
	for(i=0;i<n;i++)
	{
		a[i]=b[i];
	}
}
int main()
{
	int n=10;
	int i;
	int a[]={432,8,53,290,188,231,111,450,6777,199};
	printf("UNSORTED ARRAY\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	radixSort(a,n);
	printf("\n---------------------------------------------------------");
	printf("\n\nSORTED ARRAY\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
