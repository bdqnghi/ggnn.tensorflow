int main()
{
	int row,col,f[100][100],i,j;
	scanf("%d%d",&row,&col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
			scanf("%d",&f[i][j]);
	}
for(j=0;j<col;j++)
{
	for(i=0;i<=j&&i<row;i++)
	{
		printf("%d",f[i][j-i]);
		printf("\n");
	}
}
for(j=1;j<row;j++)
{
	for(i=j;i<row&&i<=j+col-1;i++)
	{
	printf("%d",f[i][col-1+j-i]);
	printf("\n");
	}
}
return 0;
}


