
int change(int a, int b, int t, int k)
{
	if (t == k)
		return(a + b);
	else
		change(b, a + b, t, k + 1);
}
int main()
{
	int n, m;
	cin >> n;
	for (int i = 1;i <= n;i++)
	{
		cin >> m;
		if (m == 1 || m == 2)
			cout << 1 << endl;
		else
			cout << change(1, 1,m - 2, 1) << endl << endl;
	}
	return 0;
}