int main()
{
	int a[100],b[100],c[100],d[100],e[100],f[100];
	int i=0,s,k;
	scanf("%d%d%d%d%d%d",&a[i],&b[i],&c[i],&d[i],&e[i],&f[i]);
	while(a[i]!=0||b[i]!=0||c[i]!=0||d[i]!=0||e[i]!=0||f[i]!=0)
	{
		scanf("%d%d%d%d%d%d",&a[i+1],&b[i+1],&c[i+1],&d[i+1],&e[i+1],&f[i+1]);
		i++;
	}
	for(k=0;k<i;k++)
	{
		s=3600*(12+d[k]-a[k])+60*(e[k]-b[k])+f[k]-c[k];
		printf("%d\n",s);
	}
	return 0;
}