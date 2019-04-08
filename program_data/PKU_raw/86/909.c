int num(int [], int);
int main()
{
	int n;

	cin >> n;

	for (int i = 0; i < n; i ++)
	{
		int m , count[100];

		cin >> m;
		if (m == 0)
			cout << "60" << endl;
		else
		{
			for (int j = 0; j < m; j ++)
				cin >> count[j];

			cout << num(count, m) << endl;
		}
	}

	return 0;
}

int num(int count[], int n)
{
	int i = 0;
	if (count[n - 1] + 3 * n <= 60)
		return 60 - n * 3;
	else if ((count[n - 1] + 3 * n) > 60 && (count[n - 1] + 3 * n) <= 63)
		return count[n - 1];
	else
	{	
		while ((count[i] + 3 * i) <= 60)
			i ++;
		return num(count, i);
	}
}