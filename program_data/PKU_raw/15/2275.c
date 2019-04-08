int main()
{
	int a[1000][1000];
	int n;
	int i,j,k,r;
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		for(j=0;j<=n-1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<=n-1;i++)
	{
		for(j=0;j<=n-1;j++)
		{
			if(a[i][j]==0)
			{
				for(k=0;j+k<=n-1;k++)
				{
					if(a[i][j+k]!=0)
					{
						break;
					}
				}
				for(r=0;i+r<=n-1;r++)
				{
					if(a[i+r][j]!=0)
					{
						break;
					}
				}
				goto A;
			}
		}
	}
A:  printf("%d\n",(k-2)*(r-2));
	return 0;
}