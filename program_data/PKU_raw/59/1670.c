/*
 *@file 5.cpp
 *@author ???
 *@date 11?3?
 *@description ????
 */

int main ()
{
	int n, m;
	char a[200][200], b[200][200];
	int i, j, k, count = 0;
	cin >> n;
	for (i = 0; i <= n; i++)
    {
		for (j = 0; j <= n; j++)
		{
			b[i][j] = '0';
		}
	}

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			cin >> a[i][j];
		}
	}

	cin >> m;
	m--;
	while (m--)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				b[i][j] = a[i][j];
			}
		}
		
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				if (b[i][j] == '.' && (b[i-1][j] == '@' 
					|| b[i+1][j] == '@' || b[i][j-1] == '@' 
					|| b[i][j+1] == '@' || b[i][j-1] == '@'))
					a[i][j] = '@';
			}
		}
	}

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			if (a[i][j] == '@')
				count++;
		}
	}
	cout << count << endl;
	return 0;
}