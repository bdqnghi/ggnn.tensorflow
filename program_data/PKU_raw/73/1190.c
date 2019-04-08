int main()
{
	int i,j,k=0,matrix[5][5],max[5],min[5];
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&matrix[i][j]);
		}
	}
	for(i=0;i<5;i++)
	{
		max[i]=matrix[i][0];
		min[i]=matrix[0][i];
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(matrix[i][j]>max[i])
			{
				max[i]=matrix[i][j];
			}
		}
	}
	for(j=0;j<5;j++)
	{
		for(i=0;i<5;i++)
		{
			if(matrix[i][j]<min[j])
			{
				min[j]=matrix[i][j];
			}
		}
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(max[i]==min[j])
			{
				k=1;
				printf("%d %d %d",i+1,j+1,min[j]);
			}
		}
	}
	if(k==0)
	{
		printf("not found");
	}
	return 0;
}
