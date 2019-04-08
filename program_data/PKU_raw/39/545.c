void main()
{
	int n,i,a[100],e[100],f[100],g[100]={0},m=0,k;
	char b[100][20],c[100][1],d[100][1],x[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s%d%d%s%s%d",b[i],&a[i],&e[i],c[i],d[i],&f[i]);
		if(a[i]>80&&f[i]>0)
			g[i]=g[i]+8000;
		if(a[i]>85&&e[i]>80)
			g[i]=g[i]+4000;
		if(a[i]>90)
			g[i]=g[i]+2000;
		if(a[i]>85&&strcmp(d[i],"Y")==0)
			g[i]=g[i]+1000;
		if(e[i]>80&&strcmp(c[i],"Y")==0)
			g[i]=g[i]+850;
	}
	for(i=n-2;i>=0;i--)
		if(g[i]<g[i+1])
		{
			k=g[i];
			g[i]=g[i+1];
			g[i+1]=k;
			strcpy(x,b[i]);
			strcpy(b[i],b[i+1]);
			strcpy(b[i+1],x);
		}
	for(i=0;i<n;i++)
		m=m+g[i];
	printf("%s\n%d\n%d\n",b[0],g[0],m);
}