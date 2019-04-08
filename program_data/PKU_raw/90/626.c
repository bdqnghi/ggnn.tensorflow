
int C(int m,int n)
{
	if(m==0||n==m)
		return 1;
	return C(m,n-1)+C(m-1,n-1);
}

int f(int M, int N)
{
	if(N==1)
		return 1;
	if(M==0)
		return 1;
	if(N>M)
		return f(M,N-1);
	if(M>=N)
		return f(M,N-1)+f(M-N,N);
}

int main()
{
	int n, M, N, i;
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		scanf("%d%d", &M, &N);
		
		printf("%d\n", f(M,N));
	}
	return 0;
}
