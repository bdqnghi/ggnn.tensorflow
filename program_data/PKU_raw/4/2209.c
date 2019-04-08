void main()
{
	int i,j,m,n,a=0;
	int (*p)[10000];
	scanf("%d %d",&m,&n);
	p=(int(*)[10000])calloc(10000,10000);
	for(i=0;i<=m-1;i++)
	{
		for(j=0;j<=n-1;j++)
		{
			scanf("%d",*(p+i)+j);
		}
	}
	i=0;
	j=0;
	while(a<n+m-1)
	{
        while(i!=m && j!=-1)
		{
			printf("%d\n",*(*(p+i)+j));
			i++;
			j--;
		}
		a++;
		if(a>n-1) 
		{
			j=n-1;
			i=a-(n-1);
		}
		else if(a<=n-1) 
		{
			j=a;
			i=0;
		}
	}
}