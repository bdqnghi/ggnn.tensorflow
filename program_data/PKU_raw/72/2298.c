void main()
{
	int m,n;
	int h[20][20];
	int i,j;
	int sign;

	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&h[i][j]);
		}
	}

	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			sign=1;
			if(i>0&&h[i][j]<h[i-1][j])
				sign=0;
			else if(i<m-1&&h[i][j]<h[i+1][j])
				sign=0;
			else if(j>0&&h[i][j]<h[i][j-1])
				sign=0;
			else if(j<n-1&&h[i][j]<h[i][j+1])
				sign=0;

			if(sign==1)
			{
				printf("%d %d\n",i,j);
			}
			else 
				continue;
		}
	}
}