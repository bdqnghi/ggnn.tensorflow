int main()
{
	int n,i,j,s,a1=0,b1=0,a2=0,b2=0,c[1001][1001];

	scanf("%d",&n);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&c[i][j]);

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(c[i][j]==0)
			{
				a1=i;
			    b1=j;
				break;
			}
		}
		if(c[a1][b1]==0) break;
	}

	for(i=n-1;i>=0;i--)
	{
		for(j=n-1;j>=0;j--)
		{
			if(c[i][j]==0)
			{
				a2=i;
				b2=j;
				break;
			}
		}
		if (c[a2][b2] == 0) break;
	}

	s=(a2-a1-1)*(b2-b1-1);
	printf("%d",s);
	return 0;
}
