#include <stdio.h>
int main()
{
	int b[]={0,0,1,1};
	int a[]={0,1,0,1};
	int i;
	printf("PROGRAM FOR IMPLEMENTATION OF TRUTH TABLE\n");
	printf("TRUTH TABLE FOR AND OPERATION\n");
	printf("A		B		A&&B\n");
	for(i=0;i<4;i++)
	{
		printf("%d		%d		%d\n",a[i],b[i],a[i]&&b[i]);
	}
	printf("========================\n");
	printf("TRUTH TABLE FOR OR OPERATION\n");
	printf("A		B		A||B\n");
	for(i=0;i<4;i++)
	{
		printf("%d		%d		%d\n",a[i],b[i],a[i]||b[i]);
	}
	printf("========================\n");
	printf("TRUTH TABLE FOR NOT OPERATION\n");
	printf("A		!A\n");
	for(i=0;i<2;i++)
	{
		printf("%d		%d\n",a[i],!a[i]);
	}
	printf("========================\n");
	printf("TRUTH TABLE FOR IMPLICATION OPERATION\n");
	printf("A		B		A->B\n");
	for(i=0;i<4;i++)
	{
		printf("%d		%d		%d\n",a[i],b[i],(!a[i]||b[i]));
	}
	printf("========================\n");
	printf("Prakriti Singh\n2001641520041");
	return 0;
}
