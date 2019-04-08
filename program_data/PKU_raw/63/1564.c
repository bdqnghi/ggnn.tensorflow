
int main()
{
	int a[101][101], b[101][101], c[101][101];
	int i, j, k, r, s, t, u;
	int xa, ya, xb, yb;

	cin >> xa >> ya;
	for (r = 1; r <= xa; r++)
	{
		for (s = 1; s <= ya; s++)
		{
			cin >> a[r][s];
		}
	}
	cin >> xb >> yb;
	for (t = 1; t <= xb; t++)
	{
		for (u = 1; u <= yb; u++)
		{
			cin >> b[t][u];
		}
	}

	for (i = 1; i <= xa; i++)
	{
		for (j = 1; j <= yb; j++)
		{
			c[i][j]=0;
			for (k = 1; k <= xb; k++)
			{
				c[i][j]=c[i][j]+a[i][k]*b[k][j];
			}
			if (j < yb)
			{
				cout << c[i][j] << " ";
			}
			if (j == yb)
			{
				cout << c[i][j] <<endl;
			}
		}
	}

	return 0;
}



