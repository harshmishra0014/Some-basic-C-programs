#include<stdio.h>
#define SIZE 100
int p=1;
int S1[SIZE],S2[SIZE],S3[SIZE],S4[SIZE];
void accept(int S[],int n)
{
	int i;
	 for(i=1;i<=n;i++)
 		scanf("%d",&S[i]);	
	 S[0]=n;	
}
void display(int S[])
{
	int n,i;
	n=S[0];
	printf("{ ");
	for(i=1;i<n;i++)
		printf("%d ",S[i]);
	printf(" }");
}
void difference(int S1[],int S2[])
{
	int m=S1[0];
	int n=S2[0];
	int p=1;
	int i,j,flag;
	for(i=1;i<=m;i++)
	{
        flag=1;
        for(j=1;j<=n;j++)
		{
            if(S2[j]==S1[i])
			{
                flag=1;
                break;
            }
            else
			{
                flag=0;
            }
        }
        if(flag==0)
		{
            S3[p++]=S1[i];
        }
    }
	S3[0]=p;	
}
int sym(int S[],int p)
{
	int n,i;
	n=S[0];
	for(i=1;i<n;i++)
		S4[p++]=S[i];                                         
	S4[0]=p;
	return p;
} 
int main()
{
	int n;
	printf("Program to find symmetric difference of two sets");
	printf("\nHow many elements for set-1:");
	scanf("%d",&n);
	printf("\nEnter elements\n");
	accept(S1,n);
	printf("\nHow many elements for set-2:");
	scanf("%d",&n);
	printf("\nEnter elements\n");
	accept(S2,n);
	difference(S1,S2);
	p=sym(S3,p);
	difference(S2,S1);
	p=sym(S3,p);
	printf("Symmetric Difference of set: ");
	display(S4);
	printf("\n\nHARSH MISHRA\n2001641520026");
}
	

