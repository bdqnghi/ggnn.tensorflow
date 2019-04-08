
int main()
{
	int c[2][11][11] = {0}, i, j, k;
	int m, n;
	cin >> m >> n;
	c[0][5][5] = m;
	for (k = 0; k <= n - 1; k++)
	{
		memset(c[(k+1)%2], 0, 11*11*4);
	    for (i = 1; i <= 9; i++)
		{
		    for (j = 1; j <= 9; j++)
			{
			    if (c[k%2][i][j] != 0)
				{
					c[(k+1)%2][i][j] += 2 * c[k%2][i][j];
					c[(k+1)%2][i+1][j] += c[k%2][i][j];
						c[(k+1)%2][i-1][j] += c[k%2][i][j];
						c[(k+1)%2][i][j+1] += c[k%2][i][j];
						c[(k+1)%2][i][j-1] += c[k%2][i][j];
						c[(k+1)%2][i+1][j+1] += c[k%2][i][j];
						c[(k+1)%2][i-1][j-1] += c[k%2][i][j];
						c[(k+1)%2][i+1][j-1] += c[k%2][i][j];
						c[(k+1)%2][i-1][j+1] += c[k%2][i][j];
				}
			}
		}
	}
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			cout << c[n%2][i][j];
			
			if (j == 9)
			{
				cout << endl;
			}
			else
			{
				cout << " ";
			}
		}
	
	}
	return 0;
}


