#include <stdio.h>
int main()
{
	int n,s=0,r;
	printf("ENTER A NO.");
	scanf("%d",&n);
	a:
		r=n%10;
		n=n/10;
		s=s+r;
		if(n!=0)
		goto a;
		printf("\nSUM=%d",s);
		return 0;
}
