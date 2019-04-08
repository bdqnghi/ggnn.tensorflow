
int bac[9][9] = {0};

void born(int x, int n)
{
	if(x < n)
	{
		int i, j, k, l;
		int a[9][9] = {0};
		for(i = 4 - x; i <= 4 + x; i++)
			for(j = 4 - x; j <= 4 + x; j++)
			{
				if(bac[i][j] != 0)
				{
					a[i][j] += bac[i][j];
					for(k = i - 1; k <= i + 1; k++)
						for(l = j - 1; l <= j + 1; l++)
						{
							a[k][l] += bac[i][j];
						}
				}
			}
		for(i = 0; i < 9; i++)
			for(j = 0; j < 9; j++)
			{
				bac[i][j] = a[i][j];
			}
		born(x+1, n);
	}
}

int main()
{
	int m, n;
	cin >> m >> n;
	bac[4][4] = m;
	born(0, n);
	for(int i = 0; i < 9; i++)
		for(int j = 0; j < 9; j++)
		{
			cout << bac[i][j];
			if(j != 8)
				cout << " ";
			else
				cout << endl;
		}
	return 0;
}
