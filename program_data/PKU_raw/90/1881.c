	int f(int n,int a)
	{
		int j,r;
		if(n==0)
		{
			return 1;
		}
		else if(a==1)
		{
			return 1;
		}
		if(n<a)
		{
			return f(n,n);
		}
		else
		{
			return (f(n,a-1)+f(n-a,a));
		}
	}
	int main()
	{
		int M,N,m,i,a,b,c;
		scanf("%d",&m);
		for(i=0;i<m;i++)
		{
			scanf("%d%d",&M,&N);
			b=f(M,N);
			printf("%d\n",b);
		}
		return 0;
	}