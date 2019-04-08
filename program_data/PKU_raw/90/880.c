int main()
{
	int f(int M, int N);
	int M,N,K,t,i;
	cin >> t;
	for(i = 1 ; i <= t ; i++)
	{
		cin >> M >> N;
		K = f(M,N);
		cout << K << endl;
	}
	return 0;
}
int f(int M, int N)
{
	if(N == 1)
	{
		return 1;
	}
	else if(M >= N)
	{
		return f(M,N - 1) + f(M - N,N);
	}
	else
	{
		return f(M,N - 1);
	}
}