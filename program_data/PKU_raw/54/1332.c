int num(int n,int k)
{
	int i, j, sign=0, m;
	for(j=1; sign==0 ; j++)
	{
		sign=1;
		for(m=j, i=n; i>=1; i--)
		{
			if( (m*n)%(n-1) )
			{
				sign=0;
				break;
			}
			else
				m=k+m*n/(n-1);
		}
	}
	return m;
}
void main()
{
	int m, n, k;
	scanf("%d %d",&n,&k);
	m = num(n,k);
	printf("%d\n",m);
}