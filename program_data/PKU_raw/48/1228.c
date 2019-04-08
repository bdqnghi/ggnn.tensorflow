int main()
{
	int A[10][10]={0},B[10][10]={0},i,j,k,m;
	scanf("%d%d",&A[5][5],&m);
	B[5][5]=A[5][5];
	for (k=1;k<=m;k++)
	{
		for (i=1;i<=9;i++)
		{
			for (j=1;j<=9;j++)
			{
				if (A[i][j]!=0)
				{
					B[i-1][j-1]+=A[i][j];
					B[i-1][j]+=A[i][j];
					B[i-1][j+1]+=A[i][j];
					B[i][j-1]+=A[i][j];
					B[i][j]+=A[i][j];
					B[i][j+1]+=A[i][j];
					B[i+1][j-1]+=A[i][j];
					B[i+1][j]+=A[i][j];
					B[i+1][j+1]+=A[i][j];
				}
			}
		}
		for (i=1;i<=9;i++)
		{
			for (j=1;j<=9;j++)
			{
				A[i][j]=B[i][j];
			}
		}
	}
	for (i=1;i<=9;i++)
	{
		printf("%d",A[i][1]);
		for (j=2;j<=9;j++)
		{
			printf(" %d",A[i][j]);
		}
			printf("\n");
	}

	return 0;
}
