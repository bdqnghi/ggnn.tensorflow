void main()
{
	int n,i,j,a[301],b[301]={0},c[301],m;
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
	}
	b[0]=a[0];
	for(i=1;i<=n-1;i++)
	{
		m=0;
		for(j=0;j<=i-1;j++)
		{			
			if(a[i]==a[j])
			m=m+1;
		}
		if(m==0) b[i]=a[i];
		else b[i]=0;
	}
	printf("%d",b[0]);
	for(i=1;i<=n-1;i++)
	{
		if(b[i]==0) continue;
		printf(",%d",b[i]);	

	} 
}	