int a[100][100], col, row;
void main()
{
	int i, j, k;
	scanf("%d %d",&row, &col);
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			scanf("%d", &a[i][j]);
		};
	};
	if(col>=row)
	{
		for(k=0; k<=row-1; k++)
		{
			for(i=0; i<=k; i++)
			{
				printf("%d\n", a[i][k-i]);
			};
		};
		for(k=row; k<=col-1; k++)
		{
			for(i=0; i<=row-1; i++)
			{
				printf("%d\n", a[i][k-i]);
			};
		};
		for(k=col; k<=row+col-2; k++)
		{
			for(i=k-col+1; i<=row-1; i++)
			{
				printf("%d\n", a[i][k-i]);
			};
		};
	};
	if(row>col)
	{
		for(k=0; k<=col-1; k++)
		{
			for(i=0; i<=k; i++)
			{
				printf("%d\n", a[i][k-i]);
			};
		};
		for(k=col; k<=row-1; k++)
		{
			for(i=k-col+1; i<=k; i++)
			{
				printf("%d\n", a[i][k-i]);
			};
		};
		for(k=row; k<=row+col-2; k++)
		{
			for(i=k-col+1; i<=row-1; i++)
			{
				printf("%d\n", a[i][k-i]);
			};
		};
	};
}