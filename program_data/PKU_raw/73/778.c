int main()
{
	int a[5][5],i,j,k,row[5],col[5],ro,column;
	for (i=1;i<=5;i++)
	{
		for (j=1;j<=5;j++)
			scanf("%d",&a[i-1][j-1]);
	}
	for (i=1;i<=5;i++)
	{
		col[i-1]=a[0][i-1];
		row[i-1]=a[i-1][0];
	}
	for (i=1;i<=5;i++)                //????????//
	{
		for (j=1;j<=5;j++)
		{
			if (a[i-1][j-1]>row[i-1])
				row[i-1]=a[i-1][j-1];
		}
	}
	for (j=1;j<=5;j++)              //????????//
	{
		for (i=1;i<=5;i++)
		{
			if (a[i-1][j-1]<col[j-1])
				col[j-1]=a[i-1][j-1];
		}
	}
	int exist=0;                   //?????????????//
	for (column=1;column<=5;column++)
	{
		for(ro=1;ro<=5;ro++)
		{	
			if (col[column-1]==row[ro-1])
			{
				printf("%d %d %d\n",ro,column,col[column-1]);
				exist=1;           //??????//
			}
		}
	}
	if (exist==0)
		printf("not found");
	return 0;
}