#include <stdio.h>
void mergeSort(int a,int l,int r)
{
	if(l<r)
	{
		int mid=(l+r)/2;
		mergeSort(a,l,mid);
		mergeSort(a,mid+1,r);
		merge(a,l,mid,r);
	}
}
merge(int a[],int l,int mid,int r)
{
	int i=l;
	int j=mid+1;
	int k=l;
	int b[r+1];
	while(i<=mid&&j<=r)
	{
		if(a[i]<a[j])
		{
			b[k]=a[i];i++;
		}
		else
		{
			b[k]=a[j];j++;
		}
		k++;
	}
	if(i>mid)
	{
		while(j<=r)
		{
			b[k]=a[j];k++;j++;
		}	
	}
	else
	{
		while(i<=mid)
		{
			b[k]=a[i];k++;i++;
		}
	}
	for(k=l;k<=r;k++)
		a[k]=b[k];
}
int main()
{
	int i;
	int a[]={5,6,2,1,0,9,3};
	printf("UNSORTED ARRAY\n");
	for(i=0;i<7;i++)
		printf("%d ",a[i]);
	mergeSort(a,0,6);
	printf("\n\nSORTED ARRAY\n");
	for(i=0;i<7;i++)
		printf("%d ",a[i]);	
}
