int main()
{
	int king(int n, int m);
	int n,m;

	for (;;)
	{
		scanf("%d %d",&n,&m);
		if (n==0&&m==0)
			break;
		printf("%d\n",king(n,m));
	}
	return 0;
}

int king(int n,int m)
{
	int z;
	if (n==1) return 1;
	if (n>1)
	{
		z=(m%n+king(n-1,m))%n;
		if (z==0) z=n;
		return z;
	}
}