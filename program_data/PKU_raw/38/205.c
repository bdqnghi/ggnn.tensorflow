int main()
{
	int N,M;
	double A[2013],S;
	cin >> N;
	for (int I = 1; I <= N; I ++)
	{
		cin >> M;
		for (int J = 1; J <= M; J ++) cin >> A[J];
		double *P = A;
		S = 0;
		for (int J = 1; J <= M; J ++) S += *(P + J);
		S /= M;
		double Ans = 0;
		for (int J = 1; J <= M; J ++) Ans = Ans + (*(P + J) - S) * (*(P + J) - S);
		printf("%.5lf\n",sqrt(Ans/M));
	}
}