
int main()
{
	int num[100][100];int line,row,i,j,m,n;
	scanf("%d %d",&row,&line);
	for(i=0;i<=row-1;i++)
	{
		for(j=0;j<=line-1;j++)
		{
			scanf("%d",&num[i][j]);
		}
	}
	for(j=0;j<=line-1;j++)
	{
		m=0;n=j;
	do
	{
		printf("%d\n",num[m][n]);
		m++;n--;
	}
	while (n!=-1&&m<row);
	}
	for(i=1;i<=row-1;i++)
	{
		m=i;n=line-1;
		do
		{
			printf("%d\n",num[m][n]);
			m++;n--;
		}
		while (n!=-1&&m<row);
	}
	return 0;
}
