

int main()
{
	int m,n;
	cin >> m >> n;
	int i,j;
	int a[25][25];
	for(i = 0; i < 25; i ++)
	{
		for(j = 0;j < 25;j ++)
		{
			a[i][j] = 0;
		}
	}

	for(i = 1; i < m + 1; i ++)
	{
		for(j = 1; j < n + 1; j ++)
		{
			cin >> a[i][j];
		}
	}

	for(i = 1; i < m + 1; i ++)
	{
		for(j = 1; j < n + 1; j ++)
		{
			if( a[i][j] >= a[i-1][j] && a[i][j] >= a[i+1][j] && a[i][j] >= a[i][j-1] && a[i][j] >= a[i][j+1])
			{
				cout<< i - 1 << " " << j - 1 <<endl;
			}
		}
	}
}