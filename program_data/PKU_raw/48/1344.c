int vi[9][9] = {0}, cp[9][9], m, n, em[9][9] = {0};
void go_on(int day); 
int main()
{
	int i,j;  // i??????m??????????n???
	cin >> m >> n;
	vi[4][4] = m;
	memcpy(cp, vi, 9 * 9 * 4);
	go_on(n);
	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9; j++)
		{
			if (j != 8)
			{
			cout << vi[i][j] << " ";
			}
			else
			{
				cout << vi[i][j] << endl;
			}
		}
	}
	return 0;
}

void go_on (int x)
{
	int p, q, i, j;
	if (x == 1)
	{
		for (i = -1; i <= 1; i++)
		{
			for (j = -1; j <= 1; j++)
			{
				if ((i != 0) || (j != 0))
				{
					em[4 + i][4 + j] += vi[4][4];
				}
				else
				{
					em[4 + i][4 + j] += vi[4][4] * 2;
				}
			}
		}  // ????????????em?????????
	    for (i = 0; i < 9; i++)
		{
			for (j = 0; j < 9; j++)
			{
				vi[i][j] = vi[i][j] + em[i][j] - cp[i][j];
			}
		}
		memcpy(cp,vi,9 * 9 * 4);
		for (i = 0; i <= 8; i++)
		{
			for (j = 0; j <= 8; j++)
			{
				em[i][j] = 0;
			}
		}
		return;
	}
	if (x > 1)   // ??x = 2
	{
		go_on (x - 1);
		for (p = 5 - x; p <= x + 3; p++)
		{
			for (q = 5 - x; q <= x + 3; q++)
			{
				for (i = -1;i <= 1; i++)
				{
					for (j = -1; j <= 1; j++)
					{
						if ((i != 0) || (j != 0))
						{
							em[p + i][q + j] += vi[p][q];
						}
						else
						{
							em[p + i][q + j] += vi[p][q] * 2;
						}
					}
				}
			}
		}
		for (i = 0; i < 9; i++)
		{
			for (j = 0; j < 9; j++)
			{
				vi[i][j] = vi[i][j] + em[i][j] - cp[i][j];
			}
		}
		memcpy(cp,vi, 9*9*4);
		for (i = 0; i <= 8; i++)
		{
			for (j = 0; j <= 8; j++)
			{
				em[i][j] = 0;
			}
		}
	}
}

