void main()
{
	int m,n,i,a[100001][2],b[10001],j;
	scanf("%d",&n);
	scanf("%d %d",&a[0][0],&a[0][1]);
	for (m=1;!(a[m-1][0]==0&&a[m-1][1]==0);m++)
	{
		scanf("%d %d",&a[m][0],&a[m][1]);
	}
	m-=1;
	for (i=0;i<n;i++) b[i]=0;
	for (i=0;i<m;i++)
	{
		b[a[i][0]]-=1;
		b[a[i][1]]+=1;
	}
	j=0;
	for (i=0;i<n;i++)
	{
		if (b[i]==n-1)
		{
			if (j==0) printf("%d",i);
			else printf(" %d",i);
			j++;
		}
	}
	if (j==0)
	printf("NOT FOUND");
}
