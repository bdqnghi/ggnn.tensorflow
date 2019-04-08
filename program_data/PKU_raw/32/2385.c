int main()
{
	char C[1013];
	int A[1013],B[1013];
	int K1, K2, N;
	scanf("%d\n",&N);
	for (int I = 1; I <= N; I ++)
	{
		if (I > 1) scanf("\n");
		gets(C);K1 = strlen(C);
		for (int J = 0; J < K1; J ++) A[K1 - J] = C[J] - '0';
		gets(C);K2 = strlen(C);
		for (int J = 0; J < K2; J ++) B[K2 - J] = C[J] - '0';
		for (int J = 1; J <= K2; J ++) A[J] -= B[J];
		for (int J = 1; J <= K1; J ++)
			if (A[J] < 0)
			{
				A[J] += 10;
				A[J + 1] --;
			}
		for (int J = K1; J >= 1; J --) cout << A[J];
		cout << endl;
	}

}