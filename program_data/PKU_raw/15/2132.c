void main()
{
	int n,a[100][100],i,j;
	int k=0,l=0,m=0;
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]==0)
				k++,m=j;
		}
		if(a[i][m]==0)
			l++;
	}
	k=((k-4)/2-l+2)*(l-2);
	printf("%d\n",k);
}

