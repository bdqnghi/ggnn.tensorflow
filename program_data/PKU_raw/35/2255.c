int a[9][9],row,line;
int check(int M,int N)
{
	int i,j;
	for(i=0;i<row;i++)
	{
		if(a[i][N]<a[M][N])
			return 0;
	}
	for(j=0;j<line;j++)
	{
		if(a[M][j]>a[M][N])
			return 0;
	}
	return 1;
}
int main()
{
	int i,j,judge=0;
	scanf("%d,%d",&row,&line);
	for(i=0;i<row;i++)
	{
		for(j=0;j<line;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<line;j++)
		{
			if(check(i,j))
			{
				printf("%d+%d\n",i,j);
				judge++;
				break;
			}
		}
		if(judge!=0)
			break;
	}
	if(judge==0)
		printf("No\n");
	return 0;
}