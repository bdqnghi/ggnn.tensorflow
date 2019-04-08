void main()
{
	int f(int m,int n);
	int d,M,N;
	scanf("%d%d",&M,&N);
	printf("%d",f(M,N));
}
int f(int m,int n)
{
	int a;
	if (m<n)
	{
		a=m;
		m=n;
		n=a;
	}
	if (m==n)
		return m;
	else
		return f(m/2,n);
}
