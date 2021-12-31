void countSort(int a[],int n,int k)
{
	int count[(k+1)];
	int b[n];
	int i,j,m=0;
	for(i=0;i<k+1;i++)
		count[i]=0;		//initialising 0
	for(i=0;i<n;i++)
	{
		count[a[i]]++;	//creating array with frequency
		b[i]=0;
	}
	for(i=0;i<=k;i++)
	{
		int k=count[i];
		for(j=0;j<k;j++)
		{
			b[m]=i;
			m++;
		}
	}
	for(i=0;i<n;i++)
	{
		a[i]=b[i];
	}
}
int main()
{
	int n=18;
	int i;
	int a[]={2,1,1,0,2,3,5,4,0,2,8,7,7,9,2,0,1,9};
	printf("UNSORTED ARRAY\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	int k=9;
	countSort(a,n,k);
	printf("\n\nSORTED ARRAY\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
