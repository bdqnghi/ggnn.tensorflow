int main()
{ 
	int m,n,sz[100][100],sz1[100],sz2[100],x=0,y=0,i,j,q,w,e;
	scanf("%d %d",&m,&n);
	for( i=0;i<m;i++)
	{
		for( j=0;j<n;j++)
		{
			scanf("%d",&sz[i][j]);
		}
	}
	for(q=0;q<m;q++)
	{
		for( w=0;w<n;w++)
		{ 
			if(sz[q][w]>=sz[q-1>0?q-1:0][w]&&sz[q][w]>=sz[q+1][w]&&sz[q][w]>=sz[q][w-1>0?w-1:0]&&sz[q][w]>=sz[q][w+1])
			{ 
				sz1[x]=q;sz2[y]=w; x++;y++;
			}
		}
	}
	x-=1;y-=1;
	for(e=0;e<=x;e++)
	{
		printf("%d %d\n",sz1[e],sz2[e]);
	}
	return 0;
} 