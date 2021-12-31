#include <stdio.h>
#include <stdlib.h>
#define MAN(x,y)((x)>(y))?(x):(y);



int main()
{
	char str[]="PSITCQuiz";
	printf("%s %s %sn",&str[5],&5[str],str+5);
	printf("%c %c %cn",*(str+6),str[6],6[str]);
	return 0;
}


