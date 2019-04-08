void main()
{
	int i,j,m,n,l,k,r=0,a[301],c[301],b[1000];
	for (j=1;;j++)
	{
		scanf("%d %d",&n,&m);
		if(n==0) break;
		for (i=1;i<=n;i++)
		{
			a[i]=i;
		}
		for (l=n;l>1;l--)
		{
			if(m%l==0) 
			{
				continue;
			}
			else 
			k=m%l;
			for(i=1;i<=l-k;i++)
			{
				c[i]=a[k+i];
			}
			for(i=l-k+1;i<=l-1;i++)
			{
				c[i]=a[i-l+k];
			}
			for(i=1;i<=l-1;i++)
			{
				a[i]=c[i];
			}
		}
		b[j]=a[1];
		r++;
	}
	for(j=1;j<=r;j++)
	{
		printf("%d\n",b[j]);
	}
}

