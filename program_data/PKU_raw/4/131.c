void main()
{
	int a[100][100],i,j,row,col,k;
	scanf("%d%d",&row,&col);
	for (i=0;i<row;i++)
		for (j=0;j<col;j++)
			scanf("%d",&a[i][j]);
		for (i=0,j=0,k=2;j<col;i++,j--)
		{		
			printf("%d\n",a[i][j]);
			if (j==0||i==row-1)
			{
				j=k;
				k=k+1;
				i=-1;
			}
		}
		for (i=1,j=col-1,k=1;i<row;i++,j--)
		{
			printf("%d\n",a[i][j]);

			if (i==row-1||j==0)
			{
				i=k;
				k++;
				j=col;
			}
		}
}


