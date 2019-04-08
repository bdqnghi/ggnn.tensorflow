int N,A[213][213],Sum;
void Work()
{
	memset(A,0,sizeof(A));
	Sum = 0;
	for (int I = 1; I <= N; I ++)
		for (int J = 1; J <= N; J ++) cin >> A[I][J];
	for (int K = 1; K <= N - 1; K ++)
	{
		int Min = A[1][1];
		for (int J = K + 1; J <= N; J ++)
			if (A[1][J] < Min) Min = A[1][J];
		A[1][1] -= Min;
		for (int J = K + 1; J <= N; J ++) A[1][J] -= Min;
		for (int I = K + 1; I <= N; I ++)
		{
			int Min = A[I][1];
			for (int J = K + 1; J <= N; J ++)
				if (A[I][J] < Min) Min = A[I][J];
			for (int J = 1; J <= N; J ++) A[I][J] -= Min;
		}
		Min = A[1][1];
		for (int I = K + 1; I <= N; I ++)
			if (A[I][1] < Min) Min = A[I][1];
		A[1][1] -= Min;
		for (int I =  K + 1; I <= N; I ++) A[I][1] -= Min;
		for (int J = K + 1; J <= N; J ++)
		{
			int Min = A[1][J];
			for (int I = K + 1; I <= N; I ++)
				if (A[I][J] < Min) Min = A[I][J];
			for (int I = 1; I <= N; I ++) A[I][J] -= Min;
		}
		Sum += A[K+1][K+1];
	}
	cout << Sum << endl;
}
int main()
{
	cin >> N;
	for (int I = 1; I <= N; I ++) Work();
}
