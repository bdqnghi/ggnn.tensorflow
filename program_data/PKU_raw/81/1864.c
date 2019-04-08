

int main()
{
	int matrix[5][5],i,j,n,m;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			scanf("%d",&matrix[i][j]);
	scanf("%d%d",&n,&m);

	if(n<0||n>4||m<0||m>4)
		printf("error\n");
	else
	{
		for(i=0;i<5;i++)
			swap(matrix[n][i],matrix[m][i]);
		for(i=0;i<5;i++)
		{
			for(j=0;j<4;j++)
				printf("%d ",matrix[i][j]);
			printf("%d\n",matrix[i][4]);
		}
	}
	
	return 0;
}