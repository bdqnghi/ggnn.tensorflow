
int main()
{
	int n, m, i, j, k, count = 0;
	char a[105][105], b[105][105];
	memset(a, '#', sizeof(a));
	cin >> n;
	for(i = 1; i <=n;i++)
		for(j=1; j<= n;j++)
			cin >> a[i][j];
	cin >>m;
	for(k = 1; k< m; k++)
	{
		memcpy(b, a, sizeof(a));
		for(i = 1; i <=n;i++)
		{
		    for(j=1; j<= n;j++)
			{
				if(a[i][j] == '@')
				{
					if(a[i-1][j] == '.')
						b[i-1][j] = '@';
					if(a[i+1][j] == '.')
						b[i+1][j] = '@';
					if(a[i][j-1] == '.')
						b[i][j-1] = '@';
					if(a[i][j+1] == '.')
						b[i][j+1] = '@';
				}
			}
		}
		memcpy(a, b, sizeof(b));
	}
	for(i = 1; i <=n;i++)
		for(j=1; j<= n;j++)
			if(a[i][j] == '@')
				count++;
	cout << count;

	return 0;
}
