#include<stdio.h>
#define SIZE 50
int S1[SIZE],S2[SIZE],S3[SIZE];
void accept(int S[],int n)
{
    int i;
    for(i=1;i<=n;i++)
        scanf(" %d",&S[i]);
    S[0]=n;
}
void display(int S[])
{
    int n,i;
    n=S[0];
    printf(" { ");
    for(i=1;i<=n;i++)
        printf(" %d ",S[i]);
    printf(" }");
}
int ele_pre(int S[],int x)
{ 
    int n,i;
    n=S[0];
    for(i=1;i<=n;i++)
        if(S[i]==x)
            return 1;
    return 0;
}
void intersection(int S1[],int S2[])
{
    int n,i,j=0;
    n=S1[0];
    for(i=1;i<=n;i++)
        if(ele_pre(S2,S1[i]))
            S3[++j]=S1[i];
    S3[0]=j;
}
int main()
{
    int n;
    printf(" Program to perform Intersection of twosets");
    printf("\n How many elements for Set-1: ");
    scanf(" %d",&n);
    printf("\n Enter elements\n");
    accept(S1,n);
    printf("\n How many elements for Set-2: ");
    scanf("%d",&n);
    printf("\n Enter elements\n");
    accept(S2,n); 
    intersection(S1,S2);
    printf("\n S1^S2 = S3 = ");
    display(S3);
    printf("\n\n Harsh Mishra\n 2001641520026");
}
