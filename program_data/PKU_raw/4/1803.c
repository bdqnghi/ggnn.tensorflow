
void main()
{
	int row,col,a[100][100]={0},i,j,k;
	scanf("%d%d",&row,&col);
		for(i=0;i<row;i++)
			for(j=0;j<col;j++)
				scanf("%d",&a[i][j]);
		
	for(k=0;k<col;k++)
	{
		for(i=0;k-i>=0&&i<=row-1;i++)
			printf("%d\n",a[0+i][k-i]);
	}
	for(k=1;k<row;k++)
	{
		for(i=0;k+i<=row-1&&col-1-i>=0;i++)
			printf("%d\n",a[k+i][col-1-i]);
	}
}