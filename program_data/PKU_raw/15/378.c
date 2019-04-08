int main()
{
	int a[500][500],i,j,n,h[3],g[3],s;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
		{
			if(a[i][j]==0){h[1]=i;g[1]=j;break;}
		}
	for(i=n;i>=1;i--)
		for(j=n;j>=1;j--)
		{
			if(a[i][j]==0)
			{
				h[2]=i;g[2]=j;break;
			}
		}
	s=(h[1]-h[2]-1)*(g[2]-g[1]-1);
	printf("%d",s);
	return 0;
}