
int main()
{
	int n, i, j, a[100][100], zb[100][2], k = 0, s = 0;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			cin >> a[i][j];
			if (a[i][j] == 0)
			{
				zb[k][0] = i;
				zb[k][1] = j;
				k++;
			}
		}
	}

	s = (zb[k-1][0] - zb[0][0] - 1) * (zb[k-1][1] - zb[0][1] - 1);
	cout << s << endl;
	return 0;
}
