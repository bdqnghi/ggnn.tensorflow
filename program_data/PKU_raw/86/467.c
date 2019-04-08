int main()
{
	int n, i, j, l, k, m;
	int A[1000][10];
	int B[200];
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		scanf("%d", &m);
		for(j=1;j<=m;j++)
		{
            scanf("%d", &A[i][j]); 
		}
		if(A[i][m]+3*m<60)
		{
			B[i]=60-3*m;
		}
		else
		{
			for(k=1;k<=m;k++)
			{
				if(A[i][k]+3*k>=60&&A[i][k]+3*k<=63)
				{
					B[i]=A[i][k];
				}
				else if(A[i][k-1]+3*k-3<60&&A[i][k]+3*k>=60)
				{
					B[i]=60-k*3+3;
				}
			}
		}
	}
	for(l=1;l<=n;l++)
	{
		printf("%d\n", B[l]);
	}
	return 0;
}