int sz[1000][1000];
int main()
{
	int n,i,j,x,y,s;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&sz[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			if(sz[i][j]==0)
			break;
        if(j<n)
			break;
	}
	for(x=n-1;x>=0;x--)
	{
		for(y=n-1;y>=0;y--)
			if(sz[x][y]==0)
				break;
	    if(y>=0)
	    	break;
	}
	s=(x-i-1)*(y-j-1);
	printf("%d",s);
	return 0;
}