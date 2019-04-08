void main()
{
	int c[15],d[15],p,q,i,x,j,m,n;
	scanf("%d%d",&n,&m);
	i=0;
	do
	{
		c[i]=n;
		n=n/2;
		i=i+1;
	}while(n>0);
	p=i;
	i=0;
	do
	{
		d[i]=m;
		m=m/2;
		i=i+1;
	}while(m>0);
	q=i;x=0;
	for(i=0;i<p;i++)
	{
		if(x==1) break;
	 else for(j=0;j<q;j++)
			if(c[i]==d[j])
			{
				printf("%d",c[i]);
				x=1;
				break;
			}
	}
}

