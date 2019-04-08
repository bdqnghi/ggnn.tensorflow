void main()
{
	int a[100][100],i,j,t,row,col;
	scanf("%d%d",&row,&col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<col;i++)
	{
		for(j=i;j<=col-1;j++)
			{t=a[i][j];
				printf("%d\n",a[i][j]);
			}
		for(j=i+1;j<=row-1;j++)
			{t=a[j][col-1];
				printf("%d\n",a[j][col-1]);
			}
		if(i>=row-1)
			break;
		if(i>=col-1)
			break;
		for(j=col-2;j>=i;j--)
			{t=a[row-1][j];
				printf("%d\n",a[row-1][j]);
			}
	
		
		for(j=row-2;j>i;j--)
			{t=a[j][i];
				printf("%d\n",a[j][i]);
			}
		row--;
		col--;
	}
}