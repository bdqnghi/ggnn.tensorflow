int main()
{
	int a[100],b[100],c[100],d[100],e[100],f[100],i,sum[100],j;
	for(i=0;;i++)
	{
		scanf("%d %d %d %d %d %d",&a[i],&b[i],&c[i],&d[i],&e[i],&f[i]);
		if(a[i]==0&&b[i]==0&&c[i]==0&&d[i]==0&&e[i]==0&&f[i]==0)
		{
			break;
		}
	}
	for(j=0;j<i;j++)
	{
		sum[j]=3600*(12+d[j]-a[j])+60*(e[j]-b[j])+(f[j]-c[j]);
		printf("%d\n",sum[j]);
	}
	return 0;
}
		
