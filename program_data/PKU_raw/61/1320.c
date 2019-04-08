
int f(int);

int main()
{
	int n, i, a[21];
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
		cout << f(a[i]) << endl;
	}
	return 0;
}

int f(int ah)
{
	if (ah == 1 || ah == 2)
		return 1;
	return f(ah - 1) + f(ah - 2);
}