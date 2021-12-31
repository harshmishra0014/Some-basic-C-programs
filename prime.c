#include <stdio.h>
int main ()
{
	int num,count=0,i;
	scanf("%d", &num);
	for(i=2;i<=num/2;i++)
	{
		if(num%i==0)
		{
			count=1;
			break;
	    }
	}
	if(count==0)
	printf("P");
	else
	printf("NP");
}
