int main()
{
	int sz[100],dx[100];
	int i,j,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&sz[i]);
		j=n-1-i;
		dx[j]=sz[i];
	}
	for(j=0;j<n-1;j++)
	{

		printf("%d ",dx[j]);
	}
	if(j==n-1)
		printf("%d",dx[j]);
	return 0;
}
