int main()
{
	int i,j,k,x=1;
	int max[10],min[10];
	int col,row;
	int sz[10][10];
	scanf("%d,%d",&row,&col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&sz[i][j]);
		}
	}
	for(i=0;i<row;i++)
	{
		max[i]=sz[i][0];
		for(j=col-1;j>0;j--)
		{
			for(k=0;k<=j;k++)
			{
				if(sz[i][k]>max[i])
				{
					max[i]=sz[i][k];
				}
			}
		}
	}
	for(j=0;j<col;j++)
	{
		min[j]=sz[0][j];
		for(i=row-1;i>0;i--)
		{
			for(k=0;k<=i;k++)
			{
				if(sz[k][j]<min[j])
				{
					min[j]=sz[k][j];
				}
			}
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(sz[i][j]==max[i]&&sz[i][j]==min[j])
			{
				printf("%d+%d",i,j);
				x=0;
			}
		}
	}
	if(x==1)printf("No");
	return 0;
}