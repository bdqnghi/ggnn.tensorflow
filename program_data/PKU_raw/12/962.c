int main()
{
	int row,col;
	int a,b;
	int sz[100][100];
	int sum[100];
		
	for(row=0;row<100;row++)
	{
		sum[row]=0;
	}
	
	for(row=0;row<100;row++)
	{
		for(col=0;col<100;col++)
		{
			scanf("%d",&sz[row][col]);
			if(sz[row][col]==0)
			{
				break;
			}
			if(sz[row][0]==-1)
			{
				break;
			}
		}
		if(sz[row][0]==-1)
		{
			break;
		}
		a=row;
	}
	
	for(row=0;row<=a;row++)
	{
		for(b=0;b<100;b++)
		{
			for(col=0;col<100;col++)
			{
				if(sz[row][b]==2*sz[row][col]&&sz[row][b]!=0&&sz[row][col]!=0)
				{
					sum[row]++;
				}
			}
		}
	}
	
	for(row=0;row<=a;row++)
	{
		printf("%d\n",sum[row]);
	}
	
	return 0;
}