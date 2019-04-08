main()
{
	int a[8][8];
	int m,n,i,j,max,min,p=0,u=0;
	scanf("%d,%d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		max=a[i][0];
		for(j=0;j<n;j++)
		{
			if(a[i][j]>max)
			{
				max=a[i][j];
				p=j;
			}
		}
		for(j=0;j<m;j++)
		{
			min=a[i][p];
			if(a[j][p]<a[i][p])
				min=a[j][p];
		}
		if(max==min)
		{
			printf("%d+%d",i,p);
			u=1;
			break;
		}
	
	}
		if(u==0)
			printf("No");
}


