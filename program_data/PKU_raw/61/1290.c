
int ans[21];

int work(int a)
{
	if (a <= 2)
		return 1;
	return (work(a - 1) + work(a - 2));
}

int main()
{
	int n, a;
	int i;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		cin >> a;
		cout << work(a) << endl;
	}
	return 0;
}