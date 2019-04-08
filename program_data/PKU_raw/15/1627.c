int main()
{
	int sz[1000][1000], i, j, n, a1, b1, a2, b2, x, y, t;
	scanf("%d\n", &n);
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			scanf("%d", &sz[i][j]);
		}
	}
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			if(sz[i][j]==0)
			{
				a1=i;
				b1=j;
				break;
			}
		}
		if((a1==i)&&(b1==j))
			break;
	}
	for(y=b1; y<n; y++)
	{
		if(sz[a1][y]==255)
		{
			b2=y-1;
			break;
		}
	}
	for(x=a1; x<n; x++)
	{
		if(sz[x][b1]==255)
		{
			a2=x-1;
			break;
		}
	}
	t=(a2-a1-1)*(b2-b1-1);
	printf("%d", t);
	return 0;
}