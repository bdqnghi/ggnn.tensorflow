int main()
{
	int sz[1000][1000];
	int n;
	scanf("%d",&n);
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&sz[i][j]);
		}
	}
	int a1,b1,a2,b2;
	int x;
	x=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(sz[i][j]==0)
			{
				a1=i;
				b1=j;
				x=1;
				break;
			}
		}
		if(x==1)
		{
			break;
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(sz[i][j]==0)
			{
				a2=i;
				b2=j;
			}
		}
	}
	int s;
	s=(a2-a1-1)*(b2-b1-1);
	printf("%d",s);
	return 0;
}