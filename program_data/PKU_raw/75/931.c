main()
{
	int i=0,j,a[2000],b[2000],k,m,p,q;
	char c;
	scanf("%d%c",&k,&c);
	while(c!='\n')
	{
		a[i]=k;
		i++;
		scanf("%d%c",&k,&c);
	}
	a[i]=k;
	for(j=0;j<=i;j++)
	{
		scanf("%d,",&b[j]);
	}
	scanf("%d",&b[j]);
	printf("%d ",i+1);
	p=0;
	q=0;
	for(m=0;m<1000;m++)
	{
		for(j=0;j<=i;j++)
		{
			if(m>=a[j]&&m<b[j])
				q++;
		}
		if(q>=p)
			p=q;
		q=0;
	}
	printf("%d\n",p);
}