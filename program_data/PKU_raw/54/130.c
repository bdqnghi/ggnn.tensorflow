void main()
{
	int n,k,m,i,x;
	scanf("%d%d",&n,&k);
	m=n;
loop:x=m;
	for(i=1;i<=n;i++)
	{
		if(x%n==k&&((x-k-x/n)!=0))
			x=x-k-x/n;
		else
		{
			m++;
			goto loop;
		}
	}
	 printf("%d",m);
}

