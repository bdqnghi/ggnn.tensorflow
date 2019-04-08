
int main()
{
	int i,j,n,m,s,sz[100][100],a,b,max=0,min=100,t=0;
	scanf("%d,",&n);
	scanf("%d",&m);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&(sz[i][j]));
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(sz[i][j]>max)
			{
				max=sz[i][j];
				a=i;
				b=j;
			}
		}
		for(s=0;s<n;s++)
		{
			if((sz[s][b])<min)
			{
				min=sz[s][b];
			}
		}
		if(min==sz[a][b])
		{   t=1;
			printf("%d+%d",a,b);
	
		}
	}
		if(t==0)
		{
			printf("No\n");
		}
		return 0;
}