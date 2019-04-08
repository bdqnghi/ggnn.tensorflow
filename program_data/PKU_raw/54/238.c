void main()
{
	int i,a,n,k,m;
	scanf("%d%d",&n,&k);
    for(a=1;;a++)
	{
		m=a*n+k;
		for(i=1;i<n;i++)
		{
			if(m%(n-1)==0)
				m=m*n/(n-1)+k;
			else break;
		}
		if(i==n)break;
	}
	for(i=1,m=a*n+k;i<n;i++)
		m=m*n/(n-1)+k;
	printf("%d\n",m);
}


