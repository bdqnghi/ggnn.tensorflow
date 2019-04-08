
int a[9][9], b[9][9];

int main()
{
	int m, day;
	cin >> m >> day;
	memset(a, 0, sizeof(a));
	memset(b, 0, sizeof(b));
	b[4][4] = m;
	for (int i = 0; i < day; i++)
	{
		memset(a, 0, sizeof(a));
		for (int p = 0; p < 9; p++)
		{
			for (int q = 0; q < 9; q++)
			{
				if (b[p][q] != 0)
				{
					a[p][q] = a[p][q] + 2 * b[p][q];
					if (p - 1 >= 0)  a[p - 1][q] += b[p][q];
					if (p + 1 < 9)  a[p + 1][q] += b[p][q];
				    if (q - 1 >= 0)  a[p][q - 1] += b[p][q];
					if (q + 1 < 9)  a[p][q + 1] += b[p][q];
					if (p - 1 >= 0 && q - 1 >= 0) a[p - 1][q - 1] += b[p][q];
					if (p + 1 < 9 && q + 1 < 9) a[p + 1][q + 1] += b[p][q];
                    if (p - 1 >= 0 && q + 1 < 9) a[p - 1][q + 1] += b[p][q];
					if (p + 1 < 9 && q - 1 >= 0) a[p + 1][q - 1] += b[p][q];
				}
			}
		}
		for (int g = 0; g < 9; g++)
		{
			for (int h = 0; h < 9; h++)
			{
				b[g][h] = a[g][h];
			}
		}
	}
	for (int s = 0; s < 9; s++)
	{
		cout << a[s][0];
		for (int t = 1; t < 9; t++)
		{
			cout << ' ' << a[s][t]; 
		}
		cout << endl;
	}
    return 0;
}