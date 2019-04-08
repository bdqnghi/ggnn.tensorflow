
void main()
{
	int row,array;
	scanf("%d,%d",&row,&array);
	int matrix[9][9]={0};
	int i=0;
	for(i=0;i<row;i++)
	{
		int j=0;
		for(j=0;j<array;j++)
		{
			if(j==0) scanf("%d",&matrix[i][j]);
			else scanf(" %d",&matrix[i][j]);
		}
	}
	int max_row[9]={0},min_array[9]={0};
	int k=0,max_mark=0;
	for(k=0;k<row;k++)
	{
		max_row[k]=matrix[k][0];
		int l=0;
		for(l=0;l<array;l++)
		{
			if(max_row[k]<matrix[k][l])
			{
				max_row[k]=matrix[k][l];
				max_mark=l;
			}
		}
		min_array[k]=max_row[k];
		int m=0;
		int min_mark=0;
		for(m=0;m<row;m++)
		{
			if(min_array[k]>matrix[m][max_mark])
			{
				min_array[k]=matrix[m][max_mark];
				min_mark=m;
			}
		}
		if(max_row[k]==min_array[k])
		{
			printf("%d+%d",min_mark,max_mark);
			break;
		}
		else 
		{
			if(k==row-1) printf("No");
		}
	}
}
