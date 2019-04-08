int main()
{
	int m,n,sz[8][8],a,b,c,d,e,f=0,i,j;
	scanf("%d,%d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&sz[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			a=sz[i][j];
			b=a;
			c=a;
			for(e=0;e<n;e++)
			{
				if(sz[i][e]>=b)
				{
					b=sz[i][e];
				}
			}
			for(d=0;d<m;d++)
			{
				if(sz[d][j]<=c)
				{
					c=sz[d][j];
				}
			}
			if((a==b)&&(a==c))
			{
				printf("%d+%d",i,j);
				f++;
			}
		}
	}
	if(f==0)
	{
		printf("No");
	}
	return 0;
}


