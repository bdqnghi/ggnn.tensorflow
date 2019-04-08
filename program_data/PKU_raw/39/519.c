void main()
{
	int n,i,r;
	char a[101][50],b[101],c[101];
	int d[101],e[101],f[101],g[150];
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		g[i]=0;
		scanf("%s %d %d %c %c %d",a[i],&d[i],&e[i],&b[i],&c[i],&f[i]);
		if (d[i]>80&&f[i]>=1)
			g[i]=g[i]+8000;
		if (d[i]>85&&e[i]>80)
			g[i]=g[i]+4000;
		if (d[i]>90)
			g[i]=g[i]+2000;
		if (d[i]>85&&c[i]=='Y')
			g[i]=g[i]+1000;
		if (e[i]>80&&b[i]=='Y')
			g[i]=g[i]+850;
	}
	g[101]=0;g[102]=0;
	for (i=0;i<n;i++)
	{
		g[102]=g[102]+g[i];
		if (g[i]>g[101])
		{
			g[101]=g[i];r=i;
		}

	}
	
	printf("%s\n",a[r]);
	printf("%d\n",g[101]);
	printf("%d\n",g[102]);

}