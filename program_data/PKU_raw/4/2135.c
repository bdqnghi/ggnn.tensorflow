void main()
{
	int a[200][200];
	int m,n,i,j,x;
	scanf("%d %d",&m,&n);
	for (i=0;i<m;i++)
      for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);

	i=0;
	j=0;
	for(x=0;x<=m+n-2;x++)
	{
		for(i=0;i<m;i++)
			for(j=0;j<n;j++)
			{
				if(i+j==x)
					printf("%d\n",a[i][j]);
			}
	}



}