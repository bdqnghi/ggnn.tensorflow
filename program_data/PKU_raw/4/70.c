void main()
{
	int row,col;
	scanf("%d %d",&row,&col);
	int **p;
	p=(int **)malloc(100*sizeof(int *));
	int i,j;
	for(i=0;i<row;i++)
		*(p+i)=(int *)malloc(100*sizeof(int));
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
			scanf("%d",*(p+i)+j);
	}
	for(j=0;j<col-1;j++)
	{
		int a=j;
		for(i=0;a>=0&&i<row;i++)
		{
			printf("%d\n",*(*(p+i)+a));
			a--;
		}
	}
	for(i=0;i<row;i++)
	{
		int a=i;
		for(j=col-1;a<row&&j>=0;j--)
		{
			printf("%d\n",*(*(p+a)+j));
			a++;
		}
	}
}


	




