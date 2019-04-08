void main()
{
	int a[301],b[50],i,j,k,x,n[50],m[50],c,d;
	for(k=1;k<=50;k++)
	{
		scanf("%d %d",&n[k],&m[k]);
		if(n[k]==0) break;
	}
	for(k=1;;k++)
	{	
		if(n[k]==0) break;
		for(i=1;i<=n[k];i++)
		{
			a[i]=i;
		}
		i=1;
		for(j=n[k];j>=2;j--)
		{
			i=(i+m[k]-2)%j+1;
			for(x=i;x<=j-1;x++)
			{
				a[x]=a[x+1];
			}
		}
		b[k]=a[1];
	}
	for(i=1;i<=k-1;i++)
	{
		printf("%d\n",b[i]);
	}
}
