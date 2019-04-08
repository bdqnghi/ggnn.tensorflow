
int a[1000][1000];

int main()
{
	int n, i, j, i1, j1, i2, j2, flag = 1;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			cin >> *(*(a + i) + j);
			if (flag && *(*(a + i) + j) == 0) {i1 = i; j1 = j; flag = 0;}
		}
	}
	for (i = i1; i < n; i++)
	{
		if (*(*(a + i) + j1) != 0) {i2 = i - 1; break;}
	}
	if (i == n) i2 = i - 1;
	for (j = j1; j < n; j++)
	{
		if (*(*(a + i2) + j) != 0) {j2 = j - 1; break;}
	}
	if (j == n) j2 = j - 1;
	cout << (i2 - i1 - 1) * (j2 - j1 - 1) << endl;
	
	return 0;
}
