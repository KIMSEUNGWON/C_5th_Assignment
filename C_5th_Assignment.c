#include<stdio.h>
void pascal(int n);

int main(void)
{
	int n;

	printf("Enter rows: ");
	scanf("%d", &n);

	pascal(n);

	return 0;


}

void pascal(int n)
{
	int i, j;
	double p[100][100] = {0};

	p[1][1] = 1;
	for (i = 2; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			p[i][j] = p[i - 1][j - 1] + p[i - 1][j];
		}
	}

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%.0f ", p[i][j]);
		}
		printf("\n");
	}

}