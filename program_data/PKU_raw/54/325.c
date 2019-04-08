void main()
{
	int n,k,t,m,s,i,j;
	s=1;
	j=0;
	i=1;
	scanf("%d%d",&n,&k);
	while(i<=n)
	{
		s=s*n;
		i++;
	}
	for(m=s;m>=n+k;m--)
	{
		t=m;
		for(j=0;j<=n;j++)
		{
			t-=k;
			if((t%n)!=0)
				break;
			t-=t/n;
			
		}
		if(j==n)
			printf("%d\n",m);
	}
}

