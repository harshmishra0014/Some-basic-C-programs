#include<stdio.h>
int main()
{
	int sparseMatrix[3][5] =
	{
		{0 , 0 , 0 , 2 , 5 },
		{1 , 0 , 0 , 0 , 2 },
		{1 , 3 , 0 , 0 , 0 }
	};
	int size = 0;
	int i,j;
	for (i = 0; i < 3; i++)
		for (j = 0; j < 5; j++)
			if (sparseMatrix[i][j] != 0)
				size++;
	int sol[3][size];
	int k = 0;
	for (i = 0; i < 3; i++)
		for (j = 0; j < 5; j++)
			if (sparseMatrix[i][j] != 0)
			{
				sol[0][k] = i;
				sol[1][k] = j;
				sol[2][k] = sparseMatrix[i][j];
				k++;
			}
	for (i=0; i<3; i++)
	{
		for (j=0; j<size; j++)
			printf("%d ", sol[i][j]);
		printf("\n");
	}
	return 0;
}
