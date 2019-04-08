int main()
{
	int n, m, i, j, a[9][9], b[9][9];
	cin>>n>>m;
	for(i = 0; i < 9; i++)
	{
		for(j = 0; j < 9; j++)
		{
			a[i][j] = 0;
		}
	}
	int ave, k, x, y;
	a[4][4] = n;
	for(k = 0; k < m; k++)
	{
		for(i = 0; i < 9; i++)
		{
			for(j = 0; j < 9; j++)
				b[i][j] = 0;
		}
		for(i = 0; i < 9; i++)
		{
			for(j = 0; j < 9; j++)
			{
				if(a[i][j] != 0)
				{
					int num = a[i][j];
				    a[i][j] = 2 * num;
				    ave = num;
				    for(x = i - 1; x <= i + 1; x++)
					{
						for(y = j - 1; y <= j + 1; y++)
						{
							if(x == i && y == j)
								continue;
							b[x][y] = b[x][y] + ave;
						}
					}
				}
			}
		}
		for(i = 0; i < 9; i++)
		{
			for(j = 0; j < 9; j++)
			{
				a[i][j] = a[i][j] + b[i][j];
			}
		}
	}
	for(i = 0; i < 9; i++)
	{
		for(j = 0; j < 8; j++)
			cout<<a[i][j]<<" ";
		cout<<a[i][8]<<endl;
	}
	return 0;
}

 




	

