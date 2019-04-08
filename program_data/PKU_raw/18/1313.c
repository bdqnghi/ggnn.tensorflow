//******************************
//* ??? ?????????  *
//* ??? 1200012878          *
//* 11?25?                   *
//******************************
int a[100][100];
void guiling(int n)
{
int min, i, j;
	for (i = 0; i < n; i++)
	{
		min = a[i][0];
		for (j = 1; j < n; j++)
		{
			if (a[i][j] < min)
				min = a[i][j];
		}
		for (j = 0; j < n; j++)
		{
			a[i][j] = a[i][j] - min;
		}
	}  // ?????
	for (i = 0; i < n; i++)
	{
		min = a[0][i];
		for (j = 1; j < n; j++)
		{
			if (a[j][i] < min)
				min = a[j][i];
		}
		for (j = 0; j < n; j++)
		    a[j][i] = a[j][i] - min;
	} // ?????
}
int sum(int n)
{
	int i, j;
	guiling(n); // ????
	int m;
    if (n == 2) 
	   return a[1][1]; // ???????????a[1][1]
	m = a[1][1];
	for (i = 1; i < n - 1; i++) // ?n??????n-1???
	{
		a[0][i] = a[0][i + 1];
		a[i][0] = a[i + 1][0];
		for (j = 1; j < n - 1; j++)
			a[i][j] = a[i + 1][j + 1];
	}
	return m + sum(n - 1); // ???????
}
int main()
{
	int n, i ,j, k;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			for (k = 0; k < n; k++)
			{
				cin >> a[j][k];
			}
		}
		cout << sum(n) << endl;
	}
	return 0;
}
