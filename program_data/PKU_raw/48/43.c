
int A[11][11], tmp[11][11];
int N;
int main()
{
	scanf ("%d %d", &A[5][5], &N);
	for (int i = 0; i < N; i ++)
	{
		memset(tmp, 0, sizeof(tmp));
		for (int l = 1; l <= 9; l ++)
			for (int r = 1; r <= 9; r ++)
			{
				tmp[l][r] += 2 * A[l][r];
				tmp[l - 1][r] += A[l][r];
				tmp[l + 1][r] += A[l][r];
				tmp[l][r - 1] += A[l][r];
				tmp[l][r + 1] += A[l][r];
				tmp[l - 1][r - 1] += A[l][r];
				tmp[l - 1][r + 1] += A[l][r];
				tmp[l + 1][r - 1] += A[l][r];
				tmp[l + 1][r + 1] += A[l][r];
			}
		memcpy(A, tmp, sizeof(tmp));	
	}
	for (int i = 1; i < 10; i ++)
	{
		for (int j = 1; j < 9; j ++)
			printf ("%d ", A[i][j]);
		printf ("%d\n", A[i][9]);
	}
	return 0;
}
