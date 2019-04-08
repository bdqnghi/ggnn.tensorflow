void main()
{
	int i,j,k,l,u,n,m,data[10][10];
	scanf("%d,%d",&n,&m);
	for(i=1;i<=n;i++)
		for(j=1;j<=m;j++)
			scanf("%d",&data[i][j]);
	for(l=0,i=1;i<=n;i++)
		for(j=1;j<=m;j++)
		{
			u=1;
			for(k=1;k<=m;k++)
				if(data[i][j]<data[i][k])
					u=0;
			for(k=1;k<=n;k++)
				if(data[k][j]<data[i][j])
					u=0;
			if(u==1)
			{
				printf("%d+%d",i-1,j-1);
				l=1;
			}	
		}
	if(l==0)
		printf("No");
}