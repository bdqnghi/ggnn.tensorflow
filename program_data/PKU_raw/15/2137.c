void main()
{
	int i,j,n,c[1000][1000],count=0,mark;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			scanf("%d",&c[i][j]);
	}
	for(i=0;i<n;i++)
	{
		mark=0;
		for(j=0;j<n;j++)
		{	
			if(c[i][j]==0&&c[i][j+1]==0)
				break;
			else
			{
				if(c[i][j]==0)
					mark++;
			}
			if(c[i][j]&&mark%2)
				count++;
		}
	}
	printf("%d\n",count);
}