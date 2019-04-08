
void main()
{
	int row,col,a[MAX][MAX],i,j,k;
	
	scanf("%d%d",&row,&col);
	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
			scanf("%d",&a[i][j]);
	
	for(j=0;j<col;j++)
		for(i=0,k=j;i<row&&k>=0;i++,k--)
			printf("%d\n",a[i][k]);

	for(i=1;i<row;i++)
		for(k=i,j=col-1;k<row&&j>=0;k++,j--)
			printf("%d\n",a[k][j]);
}
