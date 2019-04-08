void main()
{
	int m,n,a[300][300],i,j,t;
	scanf("%d %d\n",&m,&n);
	for(i=0;i<=m+1;i++) 
	{for(j=0;j<=n+1;j++)
	a[i][j]=0;}
	for(i=1;i<=m;i++)
	{
	for(j=1;j<=n;j++)
	scanf("%d",&a[i][j]);
	}
	for(i=1;i<=m;i++)
	{
	for(j=1;j<=n;j++)
	{
	t=0;
	if(a[i-1][j]<=a[i][j]) t++;
	if(a[i+1][j]<=a[i][j]) t++;
	if(a[i][j-1]<=a[i][j]) t++;
	if(a[i][j+1]<=a[i][j]) t++;
	if(t==4) printf("%d %d\n",i-1,j-1);
	}
	}
}