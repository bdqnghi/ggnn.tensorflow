//********************************
//*???2011??               **
//*??????                 **
//*???2013.1.12              **
//*******************************/


int main ()
{
	int n, m, i, j, a[100][100], b[100][100];
	cin >> n;
	cin.get();
	for (i = 0; i < n; i++)
	{
		for (j =0; j < n; j++)
		{
			label:
			switch(cin.get())
			{
			case '.':
				a[i][j] = -1;
				break;
			case '@':
				a[i][j] = 1;
				break;
			case '#':
				a[i][j] = 0;
				break;
			default:
				goto label;
			}
		}
	}
	cin >> m;
	for ( ; m >1; m--)
	{
		for (i = 0; i < n; i++)
			for (j =0; j < n; j++)
				b[i][j] = -1;
		for (i = 0; i < n; i++)
			for (j =0; j < n; j++)
			{
				if (a[i][j] == 1)
				{
					if (i != n - 1 && a[i + 1][j] == -1)
						b[i + 1][j] = 1;
					if (i != 0 && a[i - 1][j] == -1)
						b[i - 1][j] = 1;
					if (j != n - 1 && a[i][j + 1] == -1)
						b[i][j + 1] = 1;
					if (j != 0 && a[i][j - 1] == -1)
						b[i][j - 1] = 1;
				}
			}
		for (i = 0; i < n; i++)
			for (j =0; j < n; j++)
			{
				if (a[i][j] == -1 && b[i][j] ==1)
					a[i][j] = 1;
			}

	}
	int sum = 0;
	for (i = 0; i < n; i++)
		for (j =0; j < n; j++)
		{
			if (a[i][j] == 1)
				sum ++;
		} 
	cout << sum;
	return 0;
}