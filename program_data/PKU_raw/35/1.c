
main()
{
	int m,n,k,i,j;
	int num[10][10],line[10],column[10];
	scanf("%d,%d",&m,&n);
	for(i=0;i<m;++i)
		for(j=0;j<n;++j)
			scanf("%d",&num[i][j]);
	for(i=0;i<m;++i)
	{
		k=num[i][0];
		line[i]=0;
		for(j=0;j<n;++j)
			if(num[i][j]>k)
			{
				k=num[i][j];
				line[i]=j;
			}
	}
	for(i=0;i<n;++i)
	{
		k=num[0][i];
		column[i]=0;
		for(j=0;j<m;++j)
			if(num[j][i]<k)
			{
				k=num[j][i];
				column[i]=j;
			}
	}
	k=0;
	for(i=0;i<m;++i)
	{
		j=line[i];
		if(column[j]==i)
		{
			printf("%d+%d",i,j);
			k=1;
		}
	}
	if(k==0)
		printf("No");

}
