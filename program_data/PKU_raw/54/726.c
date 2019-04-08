void main()
{
	long j,k,m,n,p,q,b;
	scanf("%ld %ld",&n,&k);
	m=0;
	while(1)
	{
		m++;
		j=n;
		b=m;
		q=1;
		while(j>0)
		{
			j--;
			if(b%(n-1)==0)
				b=b/(n-1)*n+k;
			else
			{
				q=0;
				break;
			}
		}
		if(q==1)
			break;
	}
	printf("%d",b);
}