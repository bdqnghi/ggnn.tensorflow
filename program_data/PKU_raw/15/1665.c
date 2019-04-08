int main()
{
	int n,row,col;
	int sz[1000][1000];
	scanf("%d",&n);
	for(row=0;row<n;row++)
	{
		for(col=0;col<n;col++)
		{
			scanf("%d",&sz[row][col]);
		}
	}
	int a=0;
	int b=0;
	for(row=0;row<n;row++)
	{
		for(col=0;col<n-1;col++)
		{
			if(b==0)
			{
				if((sz[row][col]==0)&&(sz[row][col+1]==0))
				{
					col=n;
				}
				else if((sz[row][col]==0)&&(sz[row][col+1]==255))
				{
					a++;
					b=1;
				}
			}
			else if(b==1)
			{
				if((sz[row][col]==255)&&(sz[row][col+1]==255))
				{
					a++;
				}
				else if((sz[row][col]==255)&&(sz[row][col+1]==0))
				{
					col=n;
					b=0;
				}
			}
		}
	}
	printf("%d",a);
	return 0;
}
