int main()
{
	int n, m, temp1, temp2, i, j, a, b, k, c, d, e;
	int sz[100][100];
	scanf("%d", &n);
	temp1=0;
	temp2=0;
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
			scanf("%d", &sz[i][j]);
	}
	for(i=0; i<n&&temp1==0; i++)
	{
		for(j=0; j<n&&temp1==0; j++)
		{
			if(sz[i][j]==0&&sz[i+1][j]==0&&sz[i][j+1]==0)
			{
				a=i;
				b=j;
				temp1=1;
			}
		}
	}
	for(i=a; i<n&&temp2==0; i++)
	{
		for(j=b; j<n&&temp2==0; j++)
		{
			if(sz[i][j]==0&&sz[i-1][j]==0&&sz[i][j-1]==0)
			{
				c=i;
				d=j;
				temp2=1;
			}
		}
	}
	e=(c-a-1)*(d-b-1);
	printf("%d", e);
	return 0;
}

