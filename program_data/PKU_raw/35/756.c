
int main()
{
	int sz[ROW][COL];
	int i,j,I2,J,none,row,col;
	int k=0;
	none=0;

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
		J=0;
		for(j=0;j<col-1;j++)
		{
			if(sz[i][j]<sz[i][j+1])
			{
				J=j+1;
			}
			else
			{
				continue;
			}
		}
		I2=0;
		for(k=0;k<row-1;k++)
		{
			if(sz[k][J]>sz[k+1][J])
			{
				I2=k+1;
			}
		}
		if(i==I2)
		{
			printf("%d+%d\n",I2,J);
		}
		else
		{
			none++;
		}
	}
	if(none==row)
	{
		printf("No");
	}
	return 0;
}
