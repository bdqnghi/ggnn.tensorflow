int main()
{
	int a[100][100]={1};
	int i,j,x1,x2,y1,y2;
    int n,s;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(a[i][j]==0)
			{
				x1=i;
				y1=j;
				break;
			}
		}
		if(j!=n+1)
			break;
		
	}
	for(i=n;i>=1;i--)
	{
		for(j=n;j>=1;j--)
		{
			if(a[i][j]==0)
			{
				x2=i;
				y2=j;
				break;
			}
		}
		if(j!=0)
			break;
	}
	s=(y2-y1-1)*(x2-x1-1);
	printf("%d\n",s);
	return 0;
}
