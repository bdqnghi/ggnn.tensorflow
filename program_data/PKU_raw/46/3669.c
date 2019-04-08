int main()
{
	int n,m,M,N,i,t,e,k,s[200][200];
	scanf("%d%d", &N, &M);
	t=M*N;
	e=0;
	for(n=0;n<N;n++)
	{
		for(m=0;m<M;m++)
		{		
			scanf("%d", &s[n][m]);
		}
	}
	for(k=0;k<103;k++)
	{
		for(i=k;i<M-k;i++)
		{
			printf("%d\n", s[k][i]);
			e++;
		}
		if(e==t)
		{
			break;
		}
		for(i=k+1;i<N-k;i++)
		{
			printf("%d\n", s[i][M-k-1]);
			e++;
		}
		if(e==t)
		{
			break;
		}
		for(i=M-k-2;i>k-1;i--)
		{
			printf("%d\n", s[N-k-1][i]);
			e++;
		}
		if(e==t)
		{
			break;
		}
		for(i=N-k-2;i>k;i--)
		{
			printf("%d\n", s[i][k]);
			e++;
		}
		if(e==t)
		{
			break;
		}
	}
	return 0;
}
