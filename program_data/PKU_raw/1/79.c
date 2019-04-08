int func(int m,int q)
{
	int b[100];
	
	int i,j,k=0,p=0,sum=1;
	for (j=q;j<=m;j++)
	{
		if (j*j>m)
		{
			p=k;
			break;
		}
		if (m%j==0)
		{
			b[k]=j;
		    k++;
		}
		
	}
	if (k>2||p!=0&&m!=2)
	{
		for (i=0;i<p;i++)
		{
			sum+=func(m/b[i],b[i]);
		}
		return (sum);
	}
	else
		return (1);
}
main()
{
	int i,j,k=0,n,m,b[100]={0},a[100]={0};
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&m);
	    b[i]=func(m,2);
	}
	for (j=0;j<i;j++)
	{
		printf("%d\n",b[j]);
	}
}