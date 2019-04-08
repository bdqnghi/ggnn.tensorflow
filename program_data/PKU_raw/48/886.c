//????????


int x[9][9] = {0}, y[9][9] = {0};

void scan()
{
	int i, j;
	for(i = 0; i < 9; i++)
		for(j = 0; j < 9; j++)
		{
			if(x[i][j] != 0)
			{
				y[i][j] += x[i][j] * 2;
				y[i-1][j] += x[i][j];
				y[i+1][j] += x[i][j];
				y[i-1][j-1] += x[i][j];
				y[i-1][j+1] += x[i][j];
				y[i+1][j-1] += x[i][j];
				y[i+1][j+1] += x[i][j];
				y[i][j-1] += x[i][j];
				y[i][j+1] += x[i][j];
			}
		}

}

int main()
{
	int m, n, i, j;
	cin >> m >> n;
	x[4][4] = m;
	while(n--)
	{
		scan();
		for(i = 0; i < 9; i++)
			for(j = 0; j < 9; j++)
			{
				x[i][j] = y[i][j];
				y[i][j] = 0;
			}
	}
	for(i = 0; i < 9; i++)
		for(j = 0; j < 9; j++)
		{
			cout << x[i][j];
			if(j == 8)
				cout << endl;
			else
				cout << " ";
		}
	return 0;
}
