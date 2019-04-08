int main()
{
	int n=0,row=0,line=0,l=0;
	int Matrix[100][100]={{0},{0}};
	int a = 0, b = 0, c = 0, d = 0;
	int total = 0,extra = 0;
	scanf("%d",&n);
	while (l < n)
	{
		scanf("%d %d", &row, &line);
		for (int i = 0; i < row; i ++)
			for(int j = 0; j < line; j ++)
				scanf("%d", &Matrix[i][j]);
		if(row == 1|| line ==1)
			for(int i=0;i<row;i++)
				for(int j=0;j<line;j++)
					total+=Matrix[i][j];
		else 
		{
			extra = Matrix[0][0] + Matrix[0][line-1] + Matrix[row-1][0] + Matrix[row-1][line-1];
			for (int i = 0; i < line; i ++)
			{
				a += Matrix[0][i];
				c += Matrix[row-1][i];
			}
			for (int i = 0; i < row; i ++)
			{
				b += Matrix[i][0];
				d += Matrix[i][line-1];
			}
			total = a + b + c + d - extra;
		}
			printf("%d\n", total);
			l ++;
			a = 0;b = 0;c = 0;d = 0;
	}
	return 0;
}