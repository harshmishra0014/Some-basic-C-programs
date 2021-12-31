#include <stdio.h>
int insert(int a[],int key,int n,int capacity)
{
	if(n>=capacity)
	return n;
	int i;
	for( i=n-1;i>=0;i--)
	{
		if(a[i]>key)
		  a[i+1]=a[i];
		else 
		 break;
	}
	a[i+1]=key;
	printf("value of i is %d",i);
	return n+1;
}
int main()
{
	int key=8,j;
	int a[100]={1,2,3,5,6,7};
	int n=sizeof(a)/sizeof(a[0]);
	n=insert(a,key,6,100);
	printf("\n");
	for(j=0;j<7;j++)
	{
		printf("%d\n",a[j]);
	}	
}
