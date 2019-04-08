int f(int af)
{
	if(af == 1 || af == 2)
		return 1;
	return f(af-1) + f(af-2);
}
int main()
{
	int n, m, k;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> k;
		m = f(k);
		cout << m << endl;
	}
	return 0;
}