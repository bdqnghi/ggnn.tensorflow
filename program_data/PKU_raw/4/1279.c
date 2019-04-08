

int main()
{
	int array[100][100];
	int row,col;
        int i,j,he;

	scanf("%d%d",&row,&col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&array[i][j]);
		}
	}

	for(he=0;he<row+col-1;he++)
	{
		for(j=he;j>=0;j--)
		{
			if(j>=col)
			{
				continue;
			}
			i=he-j;
			if(i>=row)
			{
				continue;
			}
			printf("%d\n",array[i][j]);
		}
	}
	return 0;
}
