
int right(int m,int n)
{
	if(m>=0&&m<=4&&n>=0&&n<=4)
		return 1;
	else
		return 0;
}


void main()
{
	int m,n;
	int i,j;
	int array[5][5];
	int tempt[5];

	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			scanf("%d",&array[i][j]);
	scanf("%d%d",&m,&n);


	if(right(m,n))
	{
		for(i=0;i<5;i++)
		{
			tempt[i]=array[m][i];
		}
		for(i=0;i<5;i++)
		{
			array[m][i]=array[n][i];
		}
		for(i=0;i<5;i++)
		{
			array[n][i]=tempt[i];
		}
		for(i=0;i<5;i++)
		{
			for(j=0;j<4;j++)
				printf("%d ",array[i][j]);
			printf("%d\n",array[i][4]);
		}
	}
	else
		printf("error");
}