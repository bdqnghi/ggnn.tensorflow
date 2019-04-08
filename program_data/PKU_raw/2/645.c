int N;
int A[2013],Ans[1222];
char W[2013][28];
double Max(double X,double Y)
{
	return X > Y ? X : Y;
}
int main()
{
	cin >> N;
	for (int I = 1; I <= N; I ++)
		cin >> A[I] >> W[I];
	for (int I = 1; I <= N; I ++)
	{
		int L = strlen(W[I]);
		for (int J = 0; J < L; J ++) Ans[W[I][J]] ++;
	}
	int Max = 0,T;
	for (int I = 65; I <= 'Z'; I ++)
		if (Ans[I] > Max)
		{
			Max = Ans[I];
			T = I;
		}
	printf("%c\n%d\n",T,Max);
	for (int I = 1; I <= N; I ++)
	{
		int L = strlen(W[I]);
		for (int J = 0; J < L; J ++)
			if (W[I][J] == T) cout << A[I] << endl;
	}
}