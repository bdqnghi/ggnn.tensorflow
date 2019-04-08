
int main()
{
	int n,m;
	do
	{	
		scanf("%d%d",&n,&m);
		if(n==0)
			break;

		int a[301],b[301],i,j,r;
		for(i=1;i<=n;i++)
			a[i]=b[i]=i;
		for(i=1;i<=n-1;i++)
		{
			r=m%(n+1-i);
			if(r!=0)
			{
				for(j=1;j<=n-i;j++)
				{
					if(j!=n+1-i-r)
						a[j]=b[(j+r)%(n+1-i)];
					else
						a[j]=b[n+1-i];
				}
				for(j=1;j<=n-i;j++)
					b[j]=a[j];
			}
		}

		printf("%d\n",a[1]);
	}
	while(n!=0);

	return 0;
}