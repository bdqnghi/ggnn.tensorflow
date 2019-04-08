int main()
{
	int array[100][100], row, col, i, j, l, k, m, t, f[100][100]={0};
	cin >> row >> col;
	for ( i = 0; i < row; i ++)
	{
		for ( j = 0; j < col; j ++)
		{
			cin >> array[i][j];
		}
	}
	i = 0;
	m = -1;
	k = row * col;
	while ( k > 0 )
	{
			for ( j = m + 1; j < col; j ++)
			{
				if ( f[i][j] == 0 )
				{
					cout << array[i][j] <<'\n';
					k --;
					f[i][j] = 1;
				}
				else
					break;
			}
			for ( t = i + 1; t < row; t ++)
			{
				if ( f[t][j - 1] == 0 )
				{
					cout << array[t][j - 1] <<'\n';
					k --;
					f[t][j - 1] = 1;
				}
				else
					break;
			}
			for ( l = j - 2; l >= 0; l --)
			{
				if ( f[t - 1][l] == 0 )
				{
					cout << array[t - 1][l] <<'\n';
					k --;
					f[t - 1][l] = 1;
				}
				else 
					break;
			}
			for ( m = t - 2; m >= 0; m --)
			{
				if ( f[m][l + 1] == 0 )
				{
					cout << array[m][l + 1] <<'\n';
					k --;
					f[m][l + 1] = 1;
				}
				else
					break;
			}
			i ++;
	}
	return 0;
}


