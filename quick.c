#include <stdio.h>+
int partition(int a[],int l,int h)
{
	int pivot=a[l];
	int i=l;
	int j=h;
	while(i<j)
	{
		while(a[i]<=pivot)i++;
		while(a[j]>pivot)j--;
		if(i<j)
		swap(a,i,j);	
	}
	swap(a,l,j);
	return j;
}
void quickSort(int a,int l,int h)
{
	if(l<h)
	{
		int pivot=partition(a,l,h);
		quickSort(a,l,pivot-1);
		quickSort(a,pivot+1,h);
	}
}
void swap(int a[],int i,int j)
{
	int temp;
	temp=a[i];
	a[i]=a[j];
	a[j]=temp;
}
int main()
{
	int i;
	int a[]={5,6,2,1,0,9,3};
	printf("UNSORTED ARRAY\n");
	for(i=0;i<7;i++)
		printf("%d ",a[i]);
	quickSort(a,0,6);
	printf("\n\nSORTED ARRAY\n");
	for(i=0;i<7;i++)
		printf("%d ",a[i]);
	
}
