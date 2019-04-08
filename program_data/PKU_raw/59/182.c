


int main()
{
	int i,j,k,n,m,num = 0;
	char a[101][101];
	int b[101][101] = {0},c[101][101] = {0};
	char t[101];
	cin >> n;
	for(i = 1;i <= n; i++)
	{
		cin >> t;
		for(j = 0;j <= n - 1;j++)
		{
			if(t[j] == '#')
				b[i][j+1] = -1;
			else if(t[j] == '@')
				b[i][j+1] = 1;
			else
				b[i][j+1] = 0;
		}
	}
	cin >> m;
	for(k = 1;k <= m - 1;k++)
	{
		for(i = 1;i <= n; i++)
		{
			for(j = 1;j <= n;j++)
			{
				if(b[i][j] == 1)
				{
					if(b[i - 1][j] != -1)
						c[i - 1][j] =1;
					if(b[i + 1][j] != -1)
						c[i + 1][j] =1;
					if(b[i][j - 1] != -1)
						c[i][j - 1] =1;
					if(b[i][j + 1] != -1)
						c[i][j + 1] =1;
					c[i][j] = b[i][j];
				}
				if(b[i][j] == -1)
					c[i][j] = -1;
			}
		}
		for(i = 1;i <= n; i++)
		{
			for(j = 1;j <= n;j++)
			{
				b[i][j] = c[i][j];
				c[i][j] = 0;
			}
		}
	}
	for(i = 1;i <= n; i++)
	{
		for(j = 1;j <= n;j++)
		{
			if(b[i][j] == 1)
				num++;
		}
	}
	cout << num;
	return 0;
}