void main()
{
	int m,n,a,i,j,k,c=0,d[9999],z;
	while(1)
	{
		scanf("%d %d",&n,&m);
		if(m==0&&n==0)break;
		a=-1;
		int b[300]={0};
		for(i=1;i<=n-1;i++)
		{
			for(k=1;k<=m;k++)
			{
				a=a+1;
				if(a>=n)a=a-n;
				while(b[a]!=0)
				{
					a=a+1;
					if(a>=n)a=a-n;
				}
			}
			b[a]=1;
		}
		for(j=0;j<=n-1;j++)
		{
			if(b[j]==0)break;
		}
		d[c]=j+1;
		c=c+1;
	}
	for(z=0;z<=c-1;z++)
	{
		printf("%d\n",d[z]);
	}
}
