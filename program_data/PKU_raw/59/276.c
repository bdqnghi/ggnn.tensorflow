char a[102][102] = {0};
void r(int xf,int yf)
{
	if (a[xf + 1][yf] == '.')
		a[xf + 1][yf] = 'X';
	if (a[xf][yf - 1] == '.')
		a[xf][yf - 1] = 'X';
	if (a[xf - 1][yf] == '.')
		a[xf - 1][yf] = 'X';
	if (a[xf][yf + 1] == '.')
		a[xf][yf + 1] = 'X';
}
int main()
{
	int n,i,x,y,m;
	cin >> n;
	for (x = 1;x <= n;x++)
	{
		for (y = 1;y <= n;y++)
		{
			cin >> a[x][y];
		}
	}
	cin >> m;
	for (i = 1;i < m;i++)
	{
		for (x = 1;x <= n;x++)
		{
			for (y = 1;y <= n;y++)
			{
				if (a[x][y] == '@')
					r(x,y);
			}
		}
		for (x = 1;x <= n;x++)
		{
			for (y = 1;y <= n;y++)
			{
				if (a[x][y] == 'X')
					a[x][y] = '@';
			}
		}
	}
	i = 0;
	for (x = 1;x <= n;x++)
	{
		for (y = 1;y <= n;y++)
		{
			if (a[x][y] == '@')
				i++;
		}
	}
	cout << i << endl;
	return 0;
}