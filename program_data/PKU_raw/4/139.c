void main()
{
	int i,j,n,row,col,a[1000][1000];
	scanf("%d%d",&row,&col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(n=0;n<=col-1;n++)
	{
		for(j=n;(j>=0)&&(n-j)<=(row-1);j--)
		{
			printf("%d\n",a[n-j][j]);
		}
	}
	for(n=col;n<=row+col-2;n++)
	{
		for(j=col-1;(j>=0)&&(n-j)<=(row-1);j--)
		{
			printf("%d\n",a[n-j][j]);
		}
		j=col-1;
	}
}