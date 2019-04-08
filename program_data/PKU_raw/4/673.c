void main()
{
	int col,row,i,j,n,a[101][101],t;
	scanf("%d%d",&row,&col);
	for(i=0;i<row;i++)
		for(j=0;j<col;j++) scanf("%d",&a[i][j]);
	for(i=0;i<=row+col-2;i++)
	{
		for(j=0;j<=i;j++)
		{
			if(j<row&&(i-j)<col)
			printf("%d\n",a[j][i-j]);
		}
	}
	scanf("%d",&t);
}