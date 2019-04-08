int main()
{
	int sz[1000],ss[1000];
	int m,n,i,e;
	scanf("%d %d",&n,&m);
	for(i=0;i<n-1;i++)
	{
		scanf("%d ",&(sz[i]));
	}
	scanf("%d",&(sz[n-1]));
	for(i=0;i<n;i++)
	{
		ss[m+i]=sz[i];
	}
	for(i>=n;i<m+n;i++)
	{
		ss[i-n]=ss[i];
	}
	for(i=0;i<n-1;i++)
	{
		printf("%d ",ss[i]);
	}
	printf("%d",ss[n-1]);
	return 0;
}