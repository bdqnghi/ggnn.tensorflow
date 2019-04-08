int main()
{
	int N,M,L = 0,Op;
	int Q[200013][2];
	char C[213][213];
	scanf("%d\n",&N);
	for (int I = 1; I <= N; I ++)
	{
		for (int J = 1; J <= N; J ++) scanf("%c",&C[I][J]);
		scanf("\n");
	}
	cin >> M;
	for (int I = 1; I <= N; I ++)
		for (int J = 1; J <= N; J ++)
			if (C[I][J] == '@')
			{
				L ++;
				Q[L][0] = I;
				Q[L][1] = J;
			}
	Op = 1;
	for (int I = 1; I < M; I ++)
	{
		int Cl = L;
		for (int J = Op; J <= Cl; J ++)
		{
			int X = Q[J][0], Y = Q[J][1];
			if ((X + 1 <= N)  && (C[X + 1][Y] == '.'))
			{
				L ++;
				Q[L][0] = X + 1;
				Q[L][1] = Y;
				C[X + 1][Y] = '@';
			}
			if ((X -1 >= 1)  && (C[X - 1][Y] == '.'))
			{
				L ++;
				Q[L][0] = X - 1;
				Q[L][1] = Y;
				C[X - 1][Y] = '@';
			}
			if ((Y + 1 <= N)  && (C[X][Y + 1] == '.'))
			{
				L ++;
				Q[L][0] = X;
				Q[L][1] = Y + 1;
				C[X][Y + 1] = '@';
			}
			if ((Y - 1 >= 1)  && (C[X][Y - 1] == '.'))
			{
				L ++;
				Q[L][0] = X;
				Q[L][1] = Y - 1;
				C[X][Y - 1] = '@';
			}
		}
		Op = Cl + 1;
	}
	int Ans = 0;
	for (int I = 1; I <= N; I ++)
		for (int J = 1; J <= N; J ++)
			if (C[I][J] == '@') Ans ++;
	cout << Ans << endl;
}
