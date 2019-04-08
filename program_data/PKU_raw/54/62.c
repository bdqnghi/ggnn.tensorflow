void main()
{
	int n,k,i,m,z;
	scanf("%d %d",&n,&k);
	for(z=1;;z++)
	{
		m=n*z+k;
		for(i=2;i<=n&&m%(n-1)==0;i++)
			m=m/(n-1)*n+k;
		if(i==n+1)
		{
			printf("%d",m);
			break;
		}
	}
}