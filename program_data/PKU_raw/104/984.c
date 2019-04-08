void main()
{
	int m,n,x;
	scanf("%d%d",&m,&n);
	x=n;
	while(m>=1)
	{
		n=x;
		while(n>=1)
		{
		  if(m==n)
		  {
			printf("%d\n",m);
			break;
		  }
		  n=n/2;
		}
		if(m==n) break;
		m=m/2;
	}
}
