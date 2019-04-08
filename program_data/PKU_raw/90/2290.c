int main()
{
	int t,M,N,i,m,n;
	int a[30][30];
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		memset(a,0,sizeof(int));
		scanf("%d %d",&M,&N);
		for(m=0;m<=M;m++)
		{
			for(n=1;n<=N;n++)
			{
				if(m==0||m==1||n==1)
					a[m][n]=1;
				else
					if(m>=n)
						a[m][n]=a[m-n][n]+a[m][n-1];
					else
						a[m][n]=a[m][n-1];
			}
		}
		printf("%d\n",a[M][N]);
	}
	return 0;
}