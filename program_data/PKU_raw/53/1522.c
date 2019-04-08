main()
{ 
	int a[301],b[301],n,i=1,k=1,j,p=0;
	scanf("%d",&n);
	for(;i<=n;i++)
	{ 
		scanf("%d",&a[i]);
		if(i!=n) scanf(" ");
	}
	b[1]=a[1];
	for(i=1;i<=n;i++)
	{ 
		for(j=1;j<=k;j++)
		{ 
			if(a[i]==b[j])
			{
				p=1;
			}
		}
		if(p==1) p=0;
		else 
		{
			k++;
			b[k]=a[i];
		}
	}
	for(i=1;i<=k;i++) 
	{
		printf("%d",b[i]);
		if(i!=k) printf(",");
	}
	return 0;
}    
