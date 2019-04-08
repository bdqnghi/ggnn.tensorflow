int main()
{
	int n, sz[number][number], sz1[number][number], k, i, l, a, b, j, mc;
	scanf("%d%d", &n, &k);
    for(i=0;i<=8;i++)
	{
		for(j=0;j<=8;j++)
		{
			sz[i][j]=0;
			sz1[i][j]=0;
		}
	}
	sz[4][4]=n;
    for(l=1;l<=k;l++)
	{
		for(i=0;i<=8;i++)
		{
			for(j=0;j<=8;j++)
			{
				if(sz[i][j]!=0)
				{
					sz1[i-1][j-1]=sz1[i-1][j-1]+sz[i][j];
					sz1[i-1][j]=sz1[i-1][j]+sz[i][j];
                    sz1[i-1][j+1]=sz1[i-1][j+1]+sz[i][j];
					sz1[i][j-1]=sz1[i][j-1]+sz[i][j];
					sz1[i][j]=sz1[i][j]+2*sz[i][j];
					sz1[i][j+1]=sz1[i][j+1]+sz[i][j];
					sz1[i+1][j-1]=sz1[i+1][j-1]+sz[i][j];
					sz1[i+1][j]=sz1[i+1][j]+sz[i][j];
					sz1[i+1][j+1]=sz1[i+1][j+1]+sz[i][j];
				}
			}
		}
	    for(i=0;i<=8;i++)
		{
	    	for(j=0;j<=8;j++)
			{
		    	sz[i][j]=sz1[i][j];
	    		sz1[i][j]=0;
			}
		}
	}
	for(i=0;i<=8;i++)
	{
		for(j=0;j<=8;j++)
		{
			if(j==8)
				printf("%d\n", sz[i][j]);
			else
				printf("%d ", sz[i][j]);
		}
	}
	return 0;
} 