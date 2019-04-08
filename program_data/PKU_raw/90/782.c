int full (int M, int N);
int empty (int M,int N);
int main()
{
	int t, M, N, i, num;
	cin >> t;
	for (i = 0; i < t; i++)
		{
			cin >> M >> N;
			cout << full(M , N) + empty(M , N) << endl;
		}
	return 0;
}
int full (int M, int N)
{
	if ( M < N )
		return 0;
	if ( M == N )
		return 1;
	if ( M > N )
	{
		return( full( M - N ,N ) + empty (M - N, N) ); 
	}

	
}
int empty (int M,int N)
{   
	if (N == 2)
		return 1;
	if (N == 1)
		return 0;
	if (N != 1 && N != 2)
	return (full( M, N - 1) + empty(M, N - 1)); 
	
}