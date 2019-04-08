int main()
{
	int n,i,j,k1,k2,m1,m2,s;
	int a[1001][1001];
	k1=0;
	k2=0;
	m1=0;
	m2=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{
			if(a[i][j-1]!=0&&a[i-1][j]!=0&&a[i][j+1]==0&&a[i][j]==0)
			{
				k1=i;
				m1=j;
			}
			else if(a[i][j-1]==0&&a[i+1][j]!=0&&a[i][j+1]!=0&&a[i][j]==0)
			{
				k2=i;
				m2=j;
			}
		}
	s=(k2-k1-1)*(m2-m1-1);
	printf("%d",s);
	return 0;
}