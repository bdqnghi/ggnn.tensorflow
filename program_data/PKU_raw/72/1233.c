int main()
{
	int m,n,i,j,judge;
	int a[20][20];
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			judge=1;
			if(i>0)
			{
				if(*(*(a+i-1)+j)>*(*(a+i)+j))
					judge=0;
			}
			if(j>0)
			{
				if(*(*(a+i)+j-1)>*(*(a+i)+j))
					judge=0;
			}
			if(j<n-1)
			{
				if(*(*(a+i)+j+1)>*(*(a+i)+j))
					judge=0;
			}
			if(i<m-1)
			{
				if(*(*(a+i+1)+j)>*(*(a+i)+j))
					judge=0;
			}
			if(judge==1)printf("%d %d\n",i,j);
		}
	}
	return 0;
}