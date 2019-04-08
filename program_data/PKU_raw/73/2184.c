int main()
{
	int a[5][5];
	int i,j;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			scanf("%d",&a[i][j]);
	int row,col,max;
	for(i=0;i<5;i++)
	{
		max = 0;
		for(j=0;j<5;j++)
		{
			if(a[i][j]>=max) 
			{
				max=a[i][j];    row=i;     col=j;
			}
		}
		for(j=0;j<5;j++)
		{
			if(max > a[j][col])   break;
		}
		if(j==5)
		{
			printf("%d %d %d",row+1,col+1,max);
			return 0;
		}
	}
	printf("not found\n");
	return 0;
}
