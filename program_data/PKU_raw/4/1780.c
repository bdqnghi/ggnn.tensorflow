int main()
{
	int row, col;
	int i=0,j=0;
	int ar[101][101];
	scanf("%d %d",&row,&col);

	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
			scanf("%d",&ar[i][j]);

if(row==col){
	for(i=0;i<=col-1;i++)
		for(j=0;j<=i;j++)
			printf("%d\n",ar[j][i-j]);
	
	for(i=col;i<=row+col-2;i++)
		for(j=col-1;j>=i-row+1;j--)
			printf("%d\n",ar[i-j][j]);
}

if(row>col){
	for(i=0;i<=col-1;i++)
		for(j=0;j<=i;j++)
			printf("%d\n",ar[j][i-j]);

	for(i=col;i<=row-1;i++)
		for(j=col-1;j>=0;j--)
			printf("%d\n",ar[i-j][j]);

	for(i=row;i<=row+col-2;i++)
		for(j=col-1;j>=i-row+1;j--)
			printf("%d\n",ar[i-j][j]);
}

if(row<col){
	for(i=0;i<=row-1;i++)
		for(j=0;j<=i;j++)
			printf("%d\n",ar[j][i-j]);

	for(i=row;i<=col-1;i++)
		for(j=0;j<=row-1;j++)
			printf("%d\n",ar[j][i-j]);

	for(i=col;i<=row+col-2;i++)
		for(j=col-1;j>=i-row+1;j--)
			printf("%d\n",ar[i-j][j]);
}

	return 0;
}