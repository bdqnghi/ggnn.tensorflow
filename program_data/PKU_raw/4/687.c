int main()
{
	int a[100][100],i,j,k,sum,row,col;
	scanf("%d %d",&row,&col);
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=col;j++)
		{
			scanf("%d",&a[i-1][j-1]);
		}
	}
	for(sum=0;sum<=col-1;sum++)
	{
		for(i=0;i<=row-1;i++)
		{
			if(sum-i<0)
				break;
			printf("%d\n",a[i][sum-i]);
		}
	}
	for(sum=col;sum<=col+row-2;sum++)
	{
		for(i=sum-col+1;i<=row-1;i++)
		{
			if(sum-i<0)break;
			printf("%d\n",a[i][sum-i]);
		}
	}

	return 0;
}