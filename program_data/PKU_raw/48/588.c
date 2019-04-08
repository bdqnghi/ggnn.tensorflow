/* title :????????*
* author : ???*
* time : 2011.11.9 */


int a[11][11] = {0};
int b[11][11] = {0};
int m;

int main()
{
	int n;
	int l, s;
	int i, j, k;
	cin >> m >> n;
	a[5][5] = m;
	b[5][5] = m;
	for(i = 0; i < n; i++)
	{
		for(j = 1; j <= 9; j++)
			for(k = 1; k <= 9; k++)
			{
				b[j][k] = a[j][k];
			}
		for(j = 1; j <= 9; j++)
			for(k = 1; k <= 9; k++)
			{
				a[j][k] = 2 * b[j][k] + b[j][k - 1] + b[j][k + 1] + b[j - 1][k] + b[j + 1][k]
					+ b[j + 1][k + 1] + b[j + 1][k - 1] + b[j - 1][k + 1] + b[j - 1][k - 1];
			}
	}
	for(l = 1; l <= 9; l++)
	{
		for(s = 1; s <= 8; s++)
		{
			cout << a[l][s] << " ";
		}
		cout << a[l][9] << endl;
	}
	return 0;
}

