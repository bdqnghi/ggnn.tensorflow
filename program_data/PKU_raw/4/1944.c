main()
{
	int row,col,n,m,i,j;
	int (*p)[1000],(*q)[1000];
	scanf("%d%d",&row,&col);
	p = (int(*)[1000])malloc(row*1000*sizeof(int));
	q = p;
	for(i = 0;i < row;i++)
	{
		for(j = 0;j < col;j++)
		{
			scanf("%d",*(q+i)+j);
		}
	}
	q = p;
	for(j = 0;j < col;j++)
	{
		m = j;
		for(i = 0;m >=0&&i < row;m--,i++)
		{
			printf("%d\n",*(*(q+i)+m));
		}
	}
	for(i = 1;i < row;i++)
	{
		m = i;
		for(j = col - 1;m < row&&j>=0;j--,m++)
		{
			printf("%d\n",*(*(q+m)+j));
		}
	}
}