int main()
{
	int a[100],b[100],c[100],d[100],e[100],f[100],g[100],i=0,m;
	while(i<1000)
	{
		scanf("%d %d %d %d %d %d",&a[i],&b[i],&c[i],&d[i],&e[i],&f[i]);
		if(a[i]==0&&b[i]==0&&c[i]==0&&d[i]==0&&e[i]==0&&f[i]==0)
		{
			break;
		}
		else
		{
			scanf("\n");
			g[i]=3600*(d[i]+12)+60*e[i]+f[i]-3600*a[i]-60*b[i]-c[i];
			i=i+1;
		}
	}
	m=i;
	i=0;
	for(i=0;i<m;i++)
	{
		printf("%d\n",g[i]);
	}
	return 0;
}