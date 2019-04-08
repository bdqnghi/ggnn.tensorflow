int main()
{
	int Person[10000] = {0};
	int n;
	cin >> n;
	int i, j;
	while (cin >> i >> j && (i != 0 || j != 0))
	{
		Person[i] = 1;
		Person[j] ++;
	}
	for (i = 0; i < n; i++)
	{
		if (Person[i] == n - 1)
		{
			cout << i << endl;
			return 0;
		}
	}
	cout << "NOT FOUND" << endl;
	return 0;
}

