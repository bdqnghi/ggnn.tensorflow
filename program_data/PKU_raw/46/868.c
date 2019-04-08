void main()
{
	int row,col,i,j,x=0,n;
	int a[100][100];
	scanf("%d %d",&row,&col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(n=0;;n++)
	{
		for(i=n;i<col-n;i++)
		{
			printf("%d\n",a[n][i]);
			x++;
		}
		for(j=n+1;j<row-n;j++)
		{
			printf("%d\n",a[j][col-n-1]);
			x++;
		}
		if(x==row*col)
			break;
		for(i=col-n-2;i>n-1;i--)
		{
			printf("%d\n",a[row-n-1][i]);
			x++;
		}
		for(j=row-n-2;j>n;j--)
		{
			printf("%d\n",a[j][n]);
			x++;
		}
	}
}