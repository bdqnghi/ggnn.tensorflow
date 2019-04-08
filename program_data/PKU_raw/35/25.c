void main()
{
	int i,ii,j,jj,m,n,grid[9][9],real=1;
	scanf("%d,%d",&m,&n);
	for(i=0;i<m;i++)
	{	for(ii=0;ii<n;ii++)
			scanf("%d",&grid[i][ii]);
	}
	for(i=0;i<m;i++)
	{
		for(ii=0;ii<n;ii++)
		{
                           if(real!=2)
			real=1;
			for(jj=0;jj<n;jj++)
			{
				if(jj==ii)
					continue;
				if(real==1)
					real=(grid[i][ii]>grid[i][jj])?1:0;	
			}
			for(j=0;j<m;j++)
			{
				if(i==j)
					continue;
				if(real==1)
					real=(grid[i][ii]<grid[j][ii])?1:0;
			}
			if(real==1)
			{
				printf("%d+%d",i,ii);
				real=2;
			}
		}
	}
	if(real==0)
		printf("No");
}