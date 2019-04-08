int main()
{
	int n, m, temp1, temp2, i, j, a, b, k, c, d, e;
	int sz[100][100];
	scanf("%d,%d", &n, &m);
	for(i=0; i<n; i++)
	{
		for(j=0; j<m; j++)
			scanf("%d", &sz[i][j]);
	}
	e=0;
	for(i=0; i<n; i++)
	{
		for(j=0; j<m; j++)
		{
			temp1=sz[i][j];
			c=0;
			for(k=0; k<m&&c==0; k++)
			{
				if(temp1<sz[i][k])
					c=1;
			}
			if(c==0)
			{
				a=i;
				b=j;
				temp2=sz[a][b];
				d=0;
				for(k=0; k<n&&d==0; k++)
				{
					if(temp2>sz[k][b])
						d=1;
				}
				if(d==0)
				{
					printf("%d+%d", a, b);
					e=1;
				}
			}
		}
	}
	if(e==0)
		printf("No");
	return 0;
}
